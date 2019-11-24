# Chiron Keyboard

![chiron](https://i.imgur.com/3XZACfs.jpg)

This is a custom keyboard meant to be easily and quickly 3D printable on
most FFF/FDM printers. It's inspired by the [Viterbi](https://keeb.io/products/viterbi-keyboard-pcbs-5x7-70-split-ortholinear), [Iris](https://keeb.io/products/iris-keyboard-split-ergonomic-keyboard), and
[Dactyl Manuform](https://github.com/adereth/dactyl-keyboard) keyboards.

Keyboard Maintainer: [Mike Hix](https://github.com/musl/)  
Case: [https://github.com/musl/chiron-keyboard](https://github.com/musl/chiron-keyboard)

Make example for this keyboard (after setting up your build environment):

    make handwired/chiron/left:default
    make handwired/chiron/right:default

Note that you need to compile the firmware for each half separately.
This is because only the left half has bluetooth and the right half
won't run with bluetooth enabled.

The good news is that if you're only changing the keymap you only have
to flash the left side.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
