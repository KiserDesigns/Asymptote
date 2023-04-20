# Asymptote Build Guide

[Jump to Firmare](#Firmware)

[Jump to Battery](#Battery)

## Included Parts
 - PCB
 - Plate
 - Xiao BLE
 - Diodes
 - Battery
 - (Asssembly alighment 3D printed parts)

## Soldering the Xiao

<img src="https://user-images.githubusercontent.com/96897936/233487838-7f036746-b3b1-479e-8b3d-d353adaa9846.JPG" width="50%"></img>
<img src="https://user-images.githubusercontent.com/96897936/233488256-cdf5f079-bb1b-4637-b620-f518337b4930.JPG" width="50%"></img>
<img src="https://user-images.githubusercontent.com/96897936/233487892-8f67548b-cc96-4b11-bc7d-1f17df7deb4c.JPG" width="50%"></img>

Using the included 3D printed parts, align the Xiao to the PCB. The USB port should be facing the bottom of the PCB, and be pressed up against the internal lip of the black alignment piece. The other alignment pieces can be placed in the other corners to provide a level surface.

<img src="https://user-images.githubusercontent.com/96897936/233488940-a76c0c12-890e-4e5d-a271-39281772ef76.JPG" width="50%"></img>

The Xiao sould sit flush to the bottom of the PCB. It is thinner than the PCB, so the top surface, facing you, will be a bit recessed down.

<img src="https://user-images.githubusercontent.com/96897936/233489086-c31068a9-531d-4962-8d53-b07e86e824f8.JPG" width="50%"></img>
<img src="https://user-images.githubusercontent.com/96897936/233489295-d59f660f-7176-4a4d-b0d0-82516f621761.JPG" width="50%"></img>

Tack opposite corners of the Xiao module in place with a bit of solder, and check the fitment of your Minivan Case. Make adjustments as needed by heating up the offending corner's solder.

<img src="https://user-images.githubusercontent.com/96897936/233489330-40ffe7e7-19ef-4653-af40-eaa485687ac9.JPG" width="50%"></img>
Remove the PCB from your case, and solder all pins on the top of the PCB.

Do Not Forget the NFC pins. These need to be soldered as well!

<img src="https://user-images.githubusercontent.com/96897936/233489484-a2690747-954e-4bc0-b119-d0c93421d781.JPG" width="50%"></img>

Then, flip the assembly over and solder the pads from the back.

<img src="https://user-images.githubusercontent.com/96897936/233489862-e720f8bc-90e5-4c32-8921-7db3fe71f748.JPG" width="50%"></img>

Solder a spare bit of wire as pictured, from the outer (+) battery pad by the Enter key, to the Batt+ pad on the Xiao

<img src="https://user-images.githubusercontent.com/96897936/233489891-49a0aa98-7a51-4fc2-98c7-c97b838964b3.JPG" width="50%"></img>

Solder another wire from the inner battery pad by the Ender key to the GND or Batt- pad on the Xiao. I recommend the GND pad, since it is easy to short the two Batt pads.

## Diodes

<img src="https://user-images.githubusercontent.com/96897936/233494702-1ac35ab4-2ee9-4ccc-a567-9514ea9d296a.JPG" width="50%"></img>

Stuff the PCB with diodes, all diodes are either pointing down or to the left (when viewed from the bottom)

<img src="https://user-images.githubusercontent.com/96897936/233494864-95476dde-cf5a-40bd-8ecb-d331874d4699.JPG" width="50%"></img>
<img src="https://user-images.githubusercontent.com/96897936/233494868-79705d2d-564d-4a13-86c6-8b50bf5a5cab.JPG" width="50%"></img>

The three diodes directly over the battery cutout interfere with injection molded tray-mount cases, solder those on the top side and trim their legs very flush on the bottom.

<img src="https://user-images.githubusercontent.com/96897936/233495377-f09f8207-0d4c-4a04-ad09-a8ef167d5647.JPG" width="50%"></img>

The diode with the "135" markings is special. If you are using a 3u spacebar layout, this diode needs to be soldered to a certain pad, 1, 3 or 5, depending on your overall bottom layout.




## <a name="Battery"></a>Battery



## <a name="Firmware"></a>Firmware

1) Log into [GitHub](https://github.com/)

2) Navigate to the [Kiser Designs Asymptote ZMK Repository](https://github.com/KiserDesigns/asymptote-zmk)

3) Click `Fork` in the top right:
![image](https://user-images.githubusercontent.com/96897936/230153508-1ed875cc-70f5-4aa7-9cbd-496e768a61c7.png)

4) Click `Create fork` at the bottom:
![image](https://user-images.githubusercontent.com/96897936/230153629-43b385ca-e62f-4ecf-a6ac-af3986314608.png)

5) Once that has finished loading, navigate into the `config` directory:
![image](https://user-images.githubusercontent.com/96897936/230153911-66edd016-d08c-4804-ac8e-f887a5050350.png)
![image](https://user-images.githubusercontent.com/96897936/230153957-2065e077-9588-4968-b48d-a80197ccdcba.png)

6) Find the `asymptote_[X].json` that matches your layout:
![image](https://user-images.githubusercontent.com/96897936/230154624-dc923b82-7962-42e9-b5a2-6771530eeba5.png)

7) Edit that file, and rename it to remove the `_[X]` to just `asymptote.json`:
![image](https://user-images.githubusercontent.com/96897936/230155018-8f5b0a24-c08e-4aa3-940d-811d05b33f26.png)
![image](https://user-images.githubusercontent.com/96897936/230155080-52efbac7-f0fa-42e1-a887-a6fd0132bd07.png)

Click `Commit changes` at the bottom:
![image](https://user-images.githubusercontent.com/96897936/230155175-a8f1e8e1-2b85-4dc8-9039-b253252cca67.png)

8) Go to `Actions` in your fork of `asymptote-zmk`:
![image](https://user-images.githubusercontent.com/96897936/230166881-86869dae-2c12-4064-a5ec-b57986477500.png)

Click `I understand ... enable them`:
![image](https://user-images.githubusercontent.com/96897936/230167066-231348f8-edd1-4679-8b6c-9a244f7ad5ae.png)

9) Naviagate to [ZMK Keymap Editor](https://nickcoutsos.github.io/keymap-editor/)

10) If prompted, click `Add Repository`:
![image](https://user-images.githubusercontent.com/96897936/230156391-cfa1620c-1fd1-4b71-a820-86144fa35dba.png)

11) Select `Only select repositories`, and select your fork of the `asymptote-zmk` repo:
![image](https://user-images.githubusercontent.com/96897936/230156757-e90e4731-eafd-4cbf-bd7b-b70958e7d57a.png)

12) Click `Install`, and `Authorize Keymap Editor`.

13) You should now be at a screen that lets you comfigure your keymap!

--- **Some keys may render to the right of the keyboard. These are not mapped to any physical switch.** ---
  
  
![image](https://user-images.githubusercontent.com/96897936/230157090-3baa8eae-909a-4ec9-ad12-5b63ef1ff60c.png)

14) See the [ZMK Docs](https://zmk.dev/docs/codes) for an overview different keycodes and functionality.

15) When all changes have been made, click `Commit Changes` in the bottom-right:
![image](https://user-images.githubusercontent.com/96897936/230158163-72979cef-c865-4f0e-871c-0815ec3237e2.png)

16) After a short time **Refesh the Page**, then click the `Firmware build` button in the bottom-right:![image](https://user-images.githubusercontent.com/96897936/230161482-b52e1850-6ea5-46a3-b2fe-d884079fbf8c.png)

17) **This may take you to an older firmware build! Click `Actions` in the top and select the most recent build (it may still be running):**

18) Download the firmware.zip by clicking `firmware` in the `Artifacts` section: ![image](https://user-images.githubusercontent.com/96897936/230161849-849281cc-8d3a-4623-8749-df9d835bc5e1.png)

19) Plug your Asymptote into your computer and enter bootloader mode. In the default keymap, this is accessible by holding "Tab" to enter layer 2 and pressing "Esc" to enter the bootloader.

20) Drag-and-drop your firmware.uf2 file from the .zip you downloaded onto your board, which should show up as `XIAO-SENSE`:

![image](https://user-images.githubusercontent.com/96897936/230163098-0127778c-2428-4b6c-83be-13617921c608.png)
