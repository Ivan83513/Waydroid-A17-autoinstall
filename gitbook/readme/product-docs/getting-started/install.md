---
icon: desktop-arrow-down
---

# Install

### Run the program

To run the program, first open your file manager. Locate to the program you downloaded. Inside the folder, right-click a empty place and select "Open in terminal".

In the terminal, run

```bash
chmod +x ./setup
./setup
```



You will see some pages when you run the program.

{% hint style="info" %}
Please make sure your system is supported by this program.
{% endhint %}

### 1. System requirements

You will see the system requirements when you start the program. To continue, type "y" and then press `enter`. To leave, press `Ctrl+C`.

### 2. Select system

You'll need to select your current system to continue.

### 3. Install Waydroid

{% stepper %}
{% step %}
#### Sudo verification

You may need to enter your password to accept the installation.
{% endstep %}

{% step %}
#### Install the main program - Waydroid

The program will help you to install Waydroid via apt (the package manager for Debian)
{% endstep %}

{% step %}
#### Download Android 17 from the Waydroid-ATV repository

It will run a command automatically to download the system and vendor image.
{% endstep %}
{% endstepper %}

### 4. Boot the system

The program will run the command `waydroid show-full-ui`. You will see the GUI of Android. Please follow the instruction to finish the setup.
