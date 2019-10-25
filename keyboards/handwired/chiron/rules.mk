<<<<<<< HEAD
# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
=======
# Required Items
MCU = atmega32u4
BOOTLOADER = atmel-dfu
SPLIT_KEYBOARD = yes

# Stuff to turn off by default
>>>>>>> Add the Chiron keyboard
AUDIO_ENABLE = no
AUTOLOG_ENABLE = no
BACKLIGHT_ENABLE = no
BLUETOOTH_ENABLE = no
<<<<<<< HEAD
BOOTMAGIC_ENABLE = no
=======
BOOT_MAGIC_ENABLE = no
>>>>>>> Add the Chiron keyboard
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
DEBUG_ENABLE = no
EXTRAKEY_ENABLE = no
FAUXCLICKY_ENABLE = no
<<<<<<< HEAD
LEADER_ENABLE = no
MIDI_ENABLE = no
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = no
RGBLIGHT_ENABLE = yes
SLEEP_LED_ENABLE = yes
=======
HD44780_ENABLE = no
LEADER_ENABLE = no
MIDI_ENABLE = no
MOUSEKEY_ENABLE = no
NKRO_ENABLE = no
RGBLIGHT_ENABLE = no
SLEEP_LED_ENABLE = no
>>>>>>> Add the Chiron keyboard
TAP_DANCE_ENABLE = no
UCIS_ENABLE = no
UNICODEMAP_ENABLE = no
UNICODE_ENABLE = no
<<<<<<< HEAD
SPLIT_KEYBOARD = yes
=======
>>>>>>> Add the Chiron keyboard
