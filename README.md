<p align="center"><img src="./readme-header.svg" width="500"></p>

<h1 align="center">Keyboard Firmware</h1>

I keep a personal [QMK](https://github.com/qmk/qmk_firmware) fork that I hack on for customizing mechanical keyboard firmware.

> [!WARNING]
> Here be some serious MF'n dragons.
> Don't use any of this if you don't want to brick your keeb.


## Overview

This repo gets mounted as a submodule into the `keyboards` directory of a fork of [qmk](https://github.com/qmk/qmk_firmware)

I plan on hacking on firmware for some friends/coworkers as well, so this is the current directory
structure:

```txt
keyboards/                    # qmk_firmware's keyboards directory
└── keebs/                    # submodule (this repo root)
    └── the0xalex/            # User namespace
        └── 75/               # Keyboard name
            ├── 75.c          # Keyboard-specific code
            ├── config.h      # Hardware configuration
            ├── halconf.h     # HAL configuration for the MCU
            ├── info.json     # Optional definition file
            ├── keyboard.json # Main keyboard definition file
            ├── mcuconf.h     # MCU-specific configuration
            ├── README.md     # Keyboard specific docs
            └── keymaps/      # Keymap directory
                └── default/      # Keymap namespace
                    └── keymap.c      # Keymap definition
```


## Setup Notes

> [!NOTE]
> I don't work with submodules often.  This stuff is a reminder for me

#### Init

```bash
# Grab current QMK upstream
brew install qmk/qmk/qmk
brew install --cask --no-quarantine qmk-toolbox
git clone --recurse-submodules git@github.com:the0xalex/qmk-fork.git qmk_firmware
cd qmk_firmware

# ensure you don't push to the other submodules
git config push.recurseSubmodules no

# Add this as a sub
git submodule add git@github.com:the0xalex/keebs keyboards/keebs
git commit -m "Add Alex's keebs as submodule"

# Setup the build environment 
qmk setup -H ~/Developer/qmk_firmware
qmk config user.keyboard=keebs/the0xalex/75
qmk config user.keymap=default
qmk doctor # verify deps and such are correct
qmk list-keyboards | grep "the0xalex"
qmk compile
```

#### Making Changes


```bash
cd keyboards/keebs  # Enter submodule dir
# -> Make whatever changes
git add .
git commit -m "Updated stuffs"
git push origin main  # Push to keebs repo

cd ../../  # Back to main repo
git add keyboards/keebs  # Update submodule reference
git commit -m "Update keyboards submodule"
git push
```

#### Pulling updates from upstream

```bash
# from the qmk-fork repo
git fetch upstream
git merge upstream/main
# -> Probably deal with conflicts
git push origin main
```
