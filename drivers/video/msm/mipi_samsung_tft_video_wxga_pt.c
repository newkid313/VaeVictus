/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "msm_fb.h"
#include "mipi_dsi.h"
#include "mipi_tc358764_dsi2lvds.h"

static struct msm_panel_info pinfo;

static struct dsi2lvds_panel_data dsi2lvds_pd = {
	.panel_name = "SMD_LTL101AL06\n",
};

static struct mipi_dsi_phy_ctrl dsi_video_mode_phy_db = {
	/* DSIPHY_REGULATOR_CTRL */
	.regulator = {0x03, 0x0a, 0x04, 0x00, 0x20}, /* common 8960 */
	/* DSIPHY_CTRL */
	.ctrl = {0x5f, 0x00, 0x00, 0x10}, /* common 8960 */
	/* DSIPHY_STRENGTH_CTRL */
	.strength = {0xff, 0x00, 0x06, 0x00}, /* common 8960 */
	/* DSIPHY_TIMING_CTRL */
	.timing = { 0x66, 0x2B, 0xD, /* panel specific */
	0, /* DSIPHY_TIMING_CTRL_3 = 0 */
	0x37, 0x3D, 0x12, 0x2F, 0x17, 0x03, 0x04},  /* panel specific */

	/* DSIPHY_PLL_CTRL */
	.pll = { 0x00, /* common 8960 */
	/* VCO */
#if defined(CONFIG_FB_MSM_MIPI_SAMSUNG_TFT_VIDEO_WXGA_PT)
	0x0E, 0x30, 0xC0, /* panel specific */
#else
	0x40, 0x01, 0x19,
#endif
	0x00, 0x50, 0x48, 0x63,
	0x77, 0x88, 0x99, /* Auto update by dsi-mipi driver */
	0x00, 0x14, 0x03, 0x00, 0x02, /* common 8960 */
	0x00, 0x20, 0x00, 0x01 }, /* common 8960 */
};


static int __init mipi_video_samsung_tft_wxga_pt_init(void)
{
	int ret;

	if (msm_fb_detect_client("mipi_video_samsung_tft_wxga"))
		return 0;

	/* Landscape */
	pinfo.xres = 1280;
	pinfo.yres = 800;
	pinfo.type =  MIPI_VIDEO_PANEL;
	pinfo.pdest = DISPLAY_1; /* Primary Display */
	pinfo.wait_cycle = 0;
	pinfo.bpp = 24; /* RGB888 = 24 bits-per-pixel */
	pinfo.fb_num = 2; /* using two frame buffers */

	/* bitclk */
#if defined(CONFIG_MIPI_CLK_451)
	pinfo.clk_rate = 451200000;
#elif defined(CONFIG_MIPI_CLK_414)
	pinfo.clk_rate = 414000000;
#else
	pinfo.clk_rate = 333350000;
#endif
	/*
	 * this panel is operated by DE,
	 * vsycn and hsync are ignored
	 */

#if defined(CONFIG_MIPI_CLK_451) /* espresso10 att */
	pinfo.lcdc.h_front_porch = 48;	/* thfp */
	pinfo.lcdc.h_back_porch = 48;	/* thb */
	pinfo.lcdc.h_pulse_width = 2;	/* thpw */

	pinfo.lcdc.v_front_porch = 64;	/* tvfp */
	pinfo.lcdc.v_back_porch = 32;	/* tvb */
	pinfo.lcdc.v_pulse_width = 2;	/* tvpw */
#elif defined(CONFIG_MIPI_CLK_414) /* espresso10 vzw & spr */
	pinfo.lcdc.h_front_porch = 32;	/* thfp */
	pinfo.lcdc.h_back_porch = 32;	/* thb */
	pinfo.lcdc.h_pulse_width = 2;	/* thpw */

	pinfo.lcdc.v_front_porch = 24;	/* tvfp */
	pinfo.lcdc.v_back_porch = 24;	/* tvb */
	pinfo.lcdc.v_pulse_width = 2;	/* tvpw */
#else /* esrepsso7 */

	pinfo.lcdc.h_front_porch = 50;/* thfp */
	pinfo.lcdc.h_back_porch = 50;	/* thb */
	pinfo.lcdc.h_pulse_width = 570;	/* thpw */

	pinfo.lcdc.v_front_porch = 8;	/* tvfp */
	pinfo.lcdc.v_back_porch = 7;	/* tvb */
	pinfo.lcdc.v_pulse_width = 30;	/* tvpw */
#endif
	pinfo.lcdc.border_clr = 0;		/* black */
	pinfo.lcdc.underflow_clr = 0xff;	/* blue */

	pinfo.lcdc.hsync_skew = 0;

	/* Backlight levels - controled via PMIC pwm gpio */
	pinfo.bl_max = 255;
	pinfo.bl_min = 1;

	/* mipi - general */
	pinfo.mipi.vc = 0; /* virtual channel */
	pinfo.mipi.rgb_swap = DSI_RGB_SWAP_RGB;
	pinfo.mipi.tx_eot_append = true;
	pinfo.mipi.t_clk_post = 4;		/* Calculated */
	pinfo.mipi.t_clk_pre = 16;		/* Calculated */

	pinfo.mipi.dsi_phy_db = &dsi_video_mode_phy_db;
	pinfo.mipi.esc_byte_ratio = 4;

	/* Four lanes are recomended for 1366x768 at 60 frames per second */
	pinfo.mipi.frame_rate = 60; /* 60 frames per second */
	pinfo.mipi.data_lane0 = true;
	pinfo.mipi.data_lane1 = true;
	pinfo.mipi.data_lane2 = true;
	pinfo.mipi.data_lane3 = true;

	pinfo.mipi.mode = DSI_VIDEO_MODE;
	/*
	 * Note: The CMI panel input is RGB888,
	 * thus the DSI-to-LVDS bridge output is RGB888.
	 * This parameter selects the DSI-Core output to the bridge.
	 */
	pinfo.mipi.dst_format = DSI_VIDEO_DST_FORMAT_RGB888;

	/* mipi - video mode */
	pinfo.mipi.traffic_mode = DSI_NON_BURST_SYNCH_EVENT;
	pinfo.mipi.pulse_mode_hsa_he = false; /* sync mode */

	pinfo.mipi.hfp_power_stop = false;
	pinfo.mipi.hbp_power_stop = false;
	pinfo.mipi.hsa_power_stop = false;
	pinfo.mipi.eof_bllp_power_stop = false;
	pinfo.mipi.bllp_power_stop = false;

	/* mipi - command mode */
	pinfo.mipi.te_sel = 0;
	pinfo.mipi.interleave_max = 1;
	/* The bridge supports only Generic Read/Write commands */
	pinfo.mipi.insert_dcs_cmd = false;
	pinfo.mipi.wr_mem_continue = 0;
	pinfo.mipi.wr_mem_start = 0;
	pinfo.mipi.stream = false; /* dma_p */
	pinfo.mipi.mdp_trigger = DSI_CMD_TRIGGER_NONE;
	pinfo.mipi.dma_trigger = DSI_CMD_TRIGGER_SW;
	/*
	 * toshiba d2l chip does not need max_pkt_szie dcs cmd
	 * client reply len is directly configure through
	 * RDPKTLN register (0x0404)
	 */
	pinfo.mipi.no_max_pkt_size = 1;
	pinfo.mipi.force_clk_lane_hs = 1;


	ret = mipi_tc358764_dsi2lvds_register(&pinfo, MIPI_DSI_PRIM,
				MIPI_DSI_PANEL_QHD_PT, &dsi2lvds_pd);
	if (ret)
		pr_err("%s: failed to register device!\n", __func__);

	return ret;
}

module_init(mipi_video_samsung_tft_wxga_pt_init);
