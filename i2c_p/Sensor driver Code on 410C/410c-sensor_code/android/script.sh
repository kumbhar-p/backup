#adb reboot bootloader
#fastboot devices
fastboot flash boot boot.img
fastboot flash userdata userdata.img
fastboot flash cache cache.img
fastboot flash recovery recovery.img
fastboot flash persist persist.img
fastboot flash system system.img
fastboot reboot
