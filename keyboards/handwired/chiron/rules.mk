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
BOOTLOADER = caterina

F_CPU = 8000000

AUDIO_ENABLE = no
AUTOLOG_ENABLE = no
BACKLIGHT_ENABLE = no
BLUETOOTH = AdafruitBLE
BLUETOOTH_ENABLE = no
BOOTMAGIC_ENABLE = no
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
DEBUG_ENABLE = no
EXTRAKEY_ENABLE = yes
FAUXCLICKY_ENABLE = no
LEADER_ENABLE = no
MIDI_ENABLE = no
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = no
RGBLIGHT_ENABLE = no
SLEEP_LED_ENABLE = no
SPLIT_KEYBOARD = yes
TAP_DANCE_ENABLE = no
UCIS_ENABLE = no
UNICODEMAP_ENABLE = no
UNICODE_ENABLE = no

DEFAULT_FOLDER = handwired/chiron/left
