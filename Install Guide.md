<details>
<summary>
## Install deb file
</summary>


```
```

Uninstall: 
```
```

## Install deb file from other source

The orginal download pfad is in example: `https://download.anydesk.com/rpi/anydesk_6.0.1-1_armhf.deb`

Die löst ein Berechtigungsproblem zur Zeit aus.
```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}


#file name for future updates
filename='anydesk_6.0.1-1_armhf'

#download the deb file
wget https://download.anydesk.com/rpi/${filename}.deb || error "Failed to downloading file. Make sure 'wget' is installed and verify your Internet Network Connection"

# Installing the software with permissions
sudo apt install -y --fix-broken ~/${filename}.deb || error "Failed to install it using gdebi"
```

Uninstall: 
```

```

Oder diese Methode:
Die löst ein Berechtigungsproblem zur Zeit aus.

```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

install_packages "https://download.anydesk.com/rpi/anydesk_6.0.1-1_armhf.deb"
```

Uninstall: 
```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

purge_packages || exit 1
```

Dies funktioniert
```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

cd $HOME
wget https://github.com/angryip/ipscan/releases/download/3.7.6/ipscan_3.7.6_all.deb
# Get dependencies
"${DIRECTORY}/pkg-install" "openjdk-11-jdk rpm fakeroot" "$(dirname "$0")" || exit 1
sudo apt --fix-broken -y install ~/ipscan_3.7.6_all.deb
rm ~/ipscan_3.7.6_all.deb
```
</details>







## Github
Dies funktioniert.
```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

git clone https://github.com/spectrumgamer75/All-is-well || error "Failed to download!"
cd $HOME/All-is-well/aiw
chmod +x 'aiwrpi.sh'
echo "alias aiw=$HOME/All-is-well/aiw/aiwrpi.sh" >> ~/.bashrc
echo "[Desktop Entry]
Name=All Is Well
GenericName=Update Helper and Fixer
Comment= ALL IS WELL is a bash script that allows users to easily update and upgrade their repositories and packages on linux. It will also fix any broken packages and dependencies.
Exec=$HOME/All-is-well/aiw/aiwrpi.sh
Icon=$HOME/pi-apps/apps/All Is Well/icon-64.png
Terminal=true
StartupNotify=true
Type=Application
Categories=Utility;" > ~/.local/share/applications/aiw.desktop || error "Failed to create menu button!"
```
Uninstall: 
```
#! /bin/bash
# This is the uninstall script for the All Is Well script
# Removes shortcuts
rm ~/.local/share/applications/aiw.desktop
# Removes main folder
sudo rm -r ~/All-is-well
# Removes alias
sed -i '/alias aiw=.*All-is-well.*/d' ~/.bashrc
exit 0
```



## tar-gz install
```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

"${DIRECTORY}/pkg-install" "adb ffmpeg libsdl2-2.0-0 python3-pip python3-tk gcc git pkg-config meson ninja-build libavcodec-dev libavformat-dev libavutil-dev libsdl2-dev" "$(dirname "$0")" || exit 1

#SCRCPY
sudo rm -rf ~/scrcpy /usr/local/share/scrcpy ~/.local/share/applications/scrcpy.desktop 2>/dev/null

wget https://misapuntesde.com/rpi_share/scrcpy-1.13.tar.gz || error "Failed to download!"
tar -xf scrcpy-1.13.tar.gz || error "Failed to extract!"
rm scrcpy-1.13.tar.gz

ln -s /usr/bin/adb $HOME/scrcpy/

sudo mkdir -p /usr/local/share/scrcpy
sudo cp -af $HOME/scrcpy/scrcpy-server /usr/local/share/scrcpy/scrcpy-server
#END OF SCRCPY

rm -rf ~/droidbuddy
git clone https://gitlab.com/gazlene/droidbuddy.git || error 'Could not clone AndroidBuddy repo!'

sudo pip3 install Pillow

echo "[Desktop Entry]
Name=AndroidBuddy
Comment=GUI for Android device recovery and maintainence
Icon=$(dirname "$0")/icon-64.png
Exec=bash -c 'cd $HOME/droidbuddy ; python3 main.py'
Type=Application
Encoding=UTF-8
Terminal=false
Categories=Utility;" > ~/.local/share/applications/androidbuddy.desktop
```

```
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

"${DIRECTORY}/purge-installed" "$(dirname "$0")" || exit 1

rm -rf ~/droidbuddy ~/scrcpy ~/.local/share/applications/scrcpy.desktop ~/.local/share/applications/androidbuddy.desktop 2>/dev/null
sudo rm -rf /usr/local/share/scrcpy 2>/dev/null
exit 0
```