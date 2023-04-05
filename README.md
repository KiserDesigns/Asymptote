# Asymptote Build Guide




## ZMK Firmware

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

8) Click `Commit changes` at the bottom:
![image](https://user-images.githubusercontent.com/96897936/230155175-a8f1e8e1-2b85-4dc8-9039-b253252cca67.png)

9) Go to `Actions` in your fork of `asymptote-zmk`:
![image](https://user-images.githubusercontent.com/96897936/230166881-86869dae-2c12-4064-a5ec-b57986477500.png)

10) Click `I understand ... enable them`:
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
