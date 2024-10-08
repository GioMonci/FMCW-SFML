# FMCW-SFML

This is the GUI version of my last project "fix my corrupt windows" which uses the command prompt to execute a series of commands
to fix corrupt files on your windows pc.

## What does this program do?

This program opens a windows that asks you to select a condition that your computer is in.
It then opens CMD as an administrator and runs a series of commands to fix any corrupt files on your Windows machine.

## How to use it?

### ~~Method 1: Using the EXE file~~
Note: Marked as virus until I can get it signed, just complie for now!

#### Steps:

1. Download the repository as a zip file.
2. Extract the zip file.
3. Open the project folder, then open the subfolder called `EXE`.
4. Run the `FMCW-SFML.exe` file.
5. If your antivirus or Windows flags the file as unsafe, you can click "More info" and choose "Run anyway".

### Method 2: Compiling the files yourself

#### Steps:

1. Download and install a C++ compiler.
2. Clone this repository or download it as a zip file and extract it.
3. Open the project folder in your C++ development environment.
4. Compile the source code.
5. Run the resulting executable file.

## Commands Used

This program runs the following commands to fix corrupt Windows files:

1. **System File Checker (SFC):**
- Scannow:
  ```
  sfc/scannow
  ```
This scans and repairs corrupted system files.

2. **Deployment Image Servicing and Management (DISM):**
- ScanHealth:
  ```
  dism /online /cleanup-image /scanhealth
  ```
  This checks the health of the Windows image.

- CheckHealth:
  ```
  dism /online /cleanup-image /checkhealth
  ```
  This checks if the Windows image is repairable.

- RestoreHealth:
  ```
  dism /online /cleanup-image /restorehealth
  ```
  This repairs the Windows image.
  
3. **Check Disk (CHKDSK):**
- CheckDisk:
  ```
  chkdsk C: /f /r /x
  ```
Scans your hard drive for file system errors.

## Notes

- Read the instructions in the program thoroughly
- Ensure you run the program with administrative privileges.
- Restart your computer after running the program to apply the changes.
- If you encounter any issues, make sure that SFC and DISM are not corrupted themselves.

## Disclaimer

Use this program at your own risk. The author is not responsible for any potential damage to your system.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
