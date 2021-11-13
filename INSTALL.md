# Install QMK Environment
https://msys.qmk.fm/

Compile Keyboard Config

make anne_pro:custom
./keyboards/anne_pro/dfuse-pack.py -b 0x08004000:anne_pro_anne-custom.bin anne_pro_anne-custom.dfu

Put Keyboard into Programming mode:
0. Install DFU Driver
1. Unplug from computer
2. Hold Escape
3. Press reset button/hole for 1 second
4. Release Escape after reset button
5. Plug into computer

Install Firmware to Keyboard:
1. Run DfuSeDemo.exe

