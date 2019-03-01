# nucleo_f446re_upy
NUCLEO_F446RE micro python build and installation

[![Instruction](https://img.shields.io/badge/carminenoviello-Instruction-00979D.svg)](https://www.carminenoviello.com/2015/06/03/running-micropyton-stm32nucleo-f4/)

[![Pinout](https://img.shields.io/badge/NUCLEO-446RE-white.svg)](https://os.mbed.com/platforms/ST-Nucleo-F446RE/)

## uPython sources
* Clone
```
$ git clone https://github.com/cnoviello/micropython
```
* Build
```
$ cd micropython/stmhal
$ PATH=/usr/lib/arm-none-eabi/bin:$PATH BOARD=STM32F4NUCLEO make
```
or if the compiler is not installed but just unpacked:
```
$ PATH=~/gcc-arm-none-eabi-5_4-2016q3/bin:$PATH BOARD=STM32F4NUCLEO make
```
If you se such piece of text - it's pretty much done.
```
LINK build-STM32F4NUCLEO/firmware.elf
   text	   data	    bss	    dec	    hex	filename
 253804	     92	  43772	 297668	  48ac4	build-STM32F4NUCLEO/firmware.elf
Create build-STM32F4NUCLEO/firmware.dfu
Create build-STM32F4NUCLEO/firmware.hex
```
## Flash
* When the board is connected via USB and ST-Link connect it with OpenOCD:
```
$ sudo openocd -f interface/stlink-v2-1.cfg -f target/stm32f4x.cfg
```
* Connect to the board via telnet
```
$ telnet localhost 4444
```
* Upload the firmware
```
> reset halt
...
> flash write_image erase build-STM32F4NUCLEO/firmware.elf
```

## Connect and try
* Connect to REPL via ST-Link vitrual tty
```
$ minocom -s
```
or (if the only setting need to change is a port name)
```
$ minicom --device /dev/ttyACM0
```
* To exit press `Ctrl+A` => `Z` => `X`


## Compiler

* Install
```
sudo apt install gcc-arm-none-eabi
```
of download from here:
`http://www.wolinlabs.com/blog/linux.stm32.discovery.gcc.html`

* Check if installed and version
```
arm-none-eabi-gcc --version
```
## Something
* Install
```
sudo apt-get install openocd
```
* Check if installed and version
```
openocd --verion
```

## Minicom
* Install
```
$ sudo apt-get install minicom
```
* Run
```
$ minocom -s
```
* Find the port
```
$ ll /dev/ |grep tty
```
or
```
$ dmesg | grep tty
```
I have tried connecting and disconnecting the device and look what is changed in the list. It was:
```
crw-rw-r--   1 root plugdev   166,   0 Mar  1 13:37 ttyACM0
```
or
```
[95041.776397] cdc_acm 1-3.1:1.2: ttyACM0: USB ACM device
```