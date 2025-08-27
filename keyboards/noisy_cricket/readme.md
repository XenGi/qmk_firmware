# noisy cricket (mini gaming keyboard)

![front](https://imgur.com/sgD8X4e.png)
![back](https://imgur.com/6gjiKvC.png)
![build](https://imgur.com/a/VligHcT.png)

A QMK based mini gaming keyboard intended gaming on the go.

* Keyboard Maintainer: [XenGi](https://gitlab.com/XenGi)
* Hardware Supported: [PCB](https://gitlab.com/noisy_cricket/pcb)
* Hardware Availability: [gerber files](https://gitlab.com/noisy_cricket/pcb/-/releases/rev2)
* USB ID: [1209:4237](https://pid.codes/1209/4237/)

Make example for this keyboard (after setting up your build environment):

```shell
make noisy_cricket:default
# or with the QMK tool
qmk compile -kb noisy_cricket -km default
```

Flashing example for this keyboard:

If you have a fresh ATMEGA chip, you have to erase it before you flash it:

```shell
dfu-programmer atmega32u4 erase --force
```

Afterwards you can do this:

```shell
make noisy_cricket:default:flash
# or with the QMK tool
qmk flash -kb noisy_cricket -km default
```

Their is also a `via` layout. if you want to use [VIA](https://www.caniusevia.com/).

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the reset button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

