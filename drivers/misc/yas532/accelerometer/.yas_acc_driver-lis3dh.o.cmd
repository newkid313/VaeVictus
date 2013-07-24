cmd_drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.o := /home/jerryscript/android/source/Kernel/scripts/gcc-wrapper.py /home/jerryscript/android/arm-eabi-4.6/bin/arm-eabi-gcc -Wp,-MD,drivers/misc/yas532/accelerometer/.yas_acc_driver-lis3dh.o.d  -nostdinc -isystem /home/jerryscript/android/arm-eabi-4.6/bin/../lib/gcc/arm-eabi/4.6.x-google/include -I/home/jerryscript/android/source/Kernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -D__ -Os -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(yas_acc_driver_lis3dh)"  -D"KBUILD_MODNAME=KBUILD_STR(yas_acc_driver_lis3dh)" -c -o drivers/misc/yas532/accelerometer/.tmp_yas_acc_driver-lis3dh.o drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.c

source_drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.o := drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.c

deps_drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.o := \
    $(wildcard include/config/yas/acc/multi/support.h) \
  include/linux/yas.h \
  include/linux/yas_cfg.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/jerryscript/android/source/Kernel/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/jerryscript/android/source/Kernel/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/jerryscript/android/source/Kernel/arch/arm/include/asm/posix_types.h \
  include/linux/yas_accel.h \
    $(wildcard include/config/yas/acc/driver/lis3dh.h) \
    $(wildcard include/config/yas/acc/driver/bma250.h) \

drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.o: $(deps_drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.o)

$(deps_drivers/misc/yas532/accelerometer/yas_acc_driver-lis3dh.o):
