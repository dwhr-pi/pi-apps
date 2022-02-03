![logo](https://github.com/Botspot/pi-apps/blob/master/icons/proglogo.png?raw=true)
## Raspberry Pi App Store für Open Source Projekte

Linux ist schwieriger zu beherrschen als Microsoft's Windows. Es richtet sich an Power-User, und Sie werden dabei auf Probleme stoßen, wenn Sie beispielsweise Tutorials befolgen. Aufgrund des Mangels an verfügbarer Software in den 'apt'-Repositorys nutzen die meisten Raspberry Pi-Besitzer ihre Pies nie voll aus, um ihren Desktop-PC-Potenzial voll auszuschöpfen. Unzählige **Raspberry bleiben aus diesem Grund ungenutzt**. Etwas muss etwas daran getan werden!
Wir stellen **Pi-Apps** vor, im Grunde eine Liste vorgefertigter Apps, die Sie mit **einem Klick** installieren können. (Was für ein Konzept!)

Ich habe dies geklont um mir Pi-Apps selbst individuell anzupassen, neu zu ordnen und um weitere andere Apps mit aufzunehmen. Da leider auch in den anderen App-Stores nicht immer das richtige, manchmal veraltet mit dabei ist. 
Auch mache ich dies, um damit selbst unabhängig zu werden. 

**[ETA Prime](https://www.youtube.com/watch?v=oqNWJ52DLes)** (a very well known RPi YouTuber) says:

> "It's an **awesome** Raspberry Pi app store and it **works really well** and there's *lots* of **great stuff in here** and it's super **easy to install**.  
> I want to give the devs of Pi-Apps a big shout-out."

## Installieren von Pi-Apps

Meine Version, funktioniert super auf Debian Bullseye
```
wget -qO- https://raw.githubusercontent.com/DWHR-Pi/pi-apps/master/install | bash
```

Die original Version, funktioniert auch super auf Debian Bullseye
```
wget -qO- https://raw.githubusercontent.com/Botspot/pi-apps/master/install | bash
```


<details>
<summary>Manuelle installation</summary>
	
Meine Version
```
git clone https://github.com/DWHR-Pi/pi-apps
~/pi-apps/install
```

Die original Version.
```
git clone https://github.com/Botspot/pi-apps
~/pi-apps/install
```
</details>

Das Installationsskript stellt sicher, dass YAD installiert ist, erstellt zwei Menüschaltflächen, einen automatisch gestarteten Updater und eine Datei (`/usr/local/bin/pi-apps`), die es ermöglicht, pi-apps vom Terminal aus auszuführen. Abgesehen davon wird nichts außerhalb Ihres Home-Verzeichnisses geändert.

<details>
<summary>Um Pi-Apps zu deinstallieren</summary>
Um Pi-Apps zu deinstallieren:

```
~/pi-apps/uninstall
```
</details>

## Zum Ausführen von Pi-Apps
Menü -> Zubehör -> Pi Apps, oder führen Sie `pi-apps` in einem Terminal aus. Führen Sie Pi-Apps aus seinem Verzeichnis mit `~/pi-apps/gui` aus.
Pi-Apps im Terminal zu starten macht sinn. Da man hier Fehlermeldungen aktiv reportiert bekommt.

### Nützliche Links
- [![Pi-Apps Discord-Server](https://img.shields.io/discord/770629697909424159.svg?color=7289da&label=Pi-Apps%20Discord%20server&logo=discord)](https://discord.gg/RXSTvaUvuu)
- [Botspot eine Spende senden](https://paypal.me/josephmarchand)
- [Änderungsprotokoll anzeigen](https://github.com/Botspot/pi-apps/blob/master/CHANGELOG.md)
- [Fehler melden](https://github.com/Botspot/pi-apps/issues/new)
- [Leepspvideo Pi-Apps Walkthrough](https://www.youtube.com/watch?v=zxyWQ3FV98I)
- [Pi-Apps & Minecraft Java-Video von ETA Prime](https://www.youtube.com/watch?v=oqNWJ52DLes)

## Was sagen andere über Pi-Apps?
> „Großartig. Danke, dass du das machst.“ - **[Novaspirit Tech](youtube.com/novaspirittech)** (großer RPi YouTuber)

> Vielen Dank an Botspot für die Erstellung; Es ist ein großartiges Programm." - **[leepspvideo](https://www.youtube.com/watch?v=zxyWQ3FV98I)** (großer RPi YouTuber)

> „Ich liebe Pi-Apps. Es ist großartig und installiert tonnenweise nützliche Software, von der die Leute nicht wissen, wie man sie installiert. Großartige Arbeit, Botspot!“ - **[RPi-Projekte und mehr](https://www.youtube.com/channel/UCkv0fW0EIUTKw6pYEnTjTbQ)** (RPi YouTuber)

> "Pi-Apps ist der Grund, warum ich einen Pi4 habe!" - Behjemen von Discord

> "Danke für die großartige Arbeit, die es allen einfach macht." - [**ShiftPlusOne**](https://www.raspberrypi.org/forums/viewtopic.php?f=63&t=290329&p=1755860#p1755857) (RPi-Moderator)

> „Viel Glück mit deinen Projekten, Botspot, du machst wirklich Wellen!“ - **[Sakaki](https://github.com/sakaki-)** (RPi-Legende)

> „Ich liebe Pi-Apps und jage alle meine Freunde herum, um sie dazu zu bringen, es zu installieren“ – Beiop von Discord

### Grundlegende Verwendung
- Dies ist das **Hauptfenster**:
![Hauptfenster](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/main%20window.png?raw=true)
Verwenden Sie das Hauptfenster, um eine App-Kategorie auszuwählen, die Sie anzeigen möchten. Öffnen Sie einen Kategorieordner, indem Sie darauf doppelklicken.
- Nachdem Sie eine Kategorie ausgewählt haben, sehen Sie eine Liste mit Apps:
![App-Liste](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/app%20list.png?raw=true)
- Wenn Sie auf eine App doppelklicken oder eine App auswählen und auf ![info.png](https://raw.githubusercontent.com/Botspot/pi-apps/master/icons/info.png) klicken, werden Sie sehen das **Details-Fenster**.
![Details](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/details%20window.png?raw=true)
- Pi-Apps zeigen möglicherweise eine Benachrichtigung beim Booten an. Wenn Sie die Updates anzeigen möchten, wird das **Updater-Fenster** angezeigt:
![Updates](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/updates%20available.png?raw=true)
- Pi-Apps **Einstellungen** können durch Aufrufen von Menü -> Einstellungen -> Pi-Apps-Einstellungen konfiguriert werden.
![Einstellungen](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/settings.png?raw=true)

## Machen

- [X] Erstellen Sie ein **App-Erstellungssystem**. (abgeschlossen mit dem Skript `createapp`)
- [X] Pi-Apps zu **Twister OS** hinzufügen. (abgeschlossen am 02.11.2020 über den Patch Twister 1.8.5.)
- [X] Unterstützt einzelne **32-Bit**- und **64-Bit**-Installationsskripte.
- [X] Erlauben, dass **mehrere Apps** aus der App-Liste ausgewählt und gleichzeitig installiert werden.
- [X] Fügen Sie der App-Liste eine **Suchfunktion** hinzu. Es ist noch experimentell: Um es zu aktivieren, wechseln Sie in **Pi-Apps-Einstellungen** -> **App-Listenstil** zu **xlunch**.
- [X] Unterteile die lange App-Liste mit einigen **Kategorien**.
- [X] Fügen Sie eine neue Kategorie hinzu, die alle derzeit **installierten** Apps enthält.

<details>
<summary>Terminal- und Skriptnutzunge</summary>

- Jede „App“ besteht einfach aus einem kleinen „Installations“-Skript, einem „Deinstallations“-Skript, zwei Symbolgrößen und zwei Textdateien, die die Beschreibung und eine Website-URL enthalten.
  - Jede App wird in einem eigenen separaten Verzeichnis gespeichert. `~/pi-apps/apps/` enthält all diese App-Verzeichnisse. Die Zoom-App würde sich beispielsweise unter `~/pi-apps/apps/Zoom/` befinden.
  - Da jeder App-Ordner in sich geschlossen ist, ist es wirklich einfach, Ihre eigenen Apps zu „packen“: Legen Sie den Ordner einfach in eine ZIP-Datei und senden Sie ihn an Freunde. (oder laden Sie es als [neue Ausgabe] hoch (https://github.com/Botspot/pi-apps/issues/new), damit Ihre App zu Pi-Apps hinzugefügt werden kann)
  - Wenn Sie auf Installieren klicken, wird das Installationsskript der ausgewählten App ausgeführt. (Oder in manchen Fällen wird das Skript „install-32“ oder „install-64“ ausgeführt.)
  - Wenn Sie auf Deinstallieren klicken, wird das Deinstallationsskript der ausgewählten App ausgeführt.
  
 ## Terminalnutzung
 - Das Skript „manage“ ähnelt „apt-get“ – es behandelt die Installation von Apps, deinstalliert sie, hält sie auf dem neuesten Stand und vieles mehr. `manage` also `Verwalten` enthält keine GUI, aber in einem Fall fragt ein Dialog, ob Sie dieselbe App wirklich zweimal installieren möchten.
   - Führen Sie Folgendes aus, um eine App zu **installieren**:
`~/pi-apps/manage install Zoom`
   - So **deinstallieren** Sie eine App:
`~/pi-apps/manage uninstall Zoom`
   - So **aktualisieren** Sie eine einzelne App:
`~/pi-apps/Update-Zoom verwalten`
Beachten Sie, dass keine Dateien verschoben werden, wenn eine App auf dem neuesten Stand ist.
   - So **überprüfen** Sie alle Apps auf Updates:
 `~/pi-apps/manage check-all`
 Dieser Befehl gibt eine Liste aktualisierbarer Apps zurück, getrennt durch das Zeichen „|“.
   - Um alle Apps zu **aktualisieren**:
  `~/pi-apps/manage update-all`
  Bitte beachten Sie, dass die Hauptskripte der Pi-Apps dadurch nicht aktualisiert werden! Es aktualisiert nur Ihre Apps und das ist ein wichtiger Unterschied.
   - Um alles zu aktualisieren:
   `~/pi-apps/updater`
 - Um alle Apps **aufzulisten**:
 `ls ~/pi-apps/apps`
 Beachten Sie, dass dies auch die „Vorlagen“-App auflistet, die normalerweise ausgeblendet ist.
 
 ## App-Ordner:
Jeder App-Ordner enthält einige dieser Dateien:
 - `credits` Enthält Credits für die App. Diese Datei kann angeben, wer die App ursprünglich erstellt hat, wer sie kompiliert hat, wer sie an Pi-Apps übermittelt hat usw. Nur wenige Apps verwenden diese Datei.
 - `description` Hier wird die Beschreibung der App gespeichert. Wenn Sie mit der Maus über eine App in der App-Liste fahren, wird ein Tooltip angezeigt, der aus der ersten Zeile dieser Datei abgeleitet wurde.
 - `icon-24.png` Dies ist ein 24x24 Pixel großes Icon, das in der App-Liste angezeigt wird.
 - `icon-64.png` Dies ist ein 64x64 Pixel großes Icon, das auf der Detailseite angezeigt wird.
 - `install` Wenn die App sowohl auf 32-Bit als auch auf 64-Bit korrekt installiert wird und nur ein Installationsskript für beide CPU-Typen benötigt wird, wird ein einziges Installationsskript verwendet.
 - `install-32` Dieses Skript installiert eine App auf 32-Bit-Betriebssystemen und ist 32-Bit-spezifisch.
 - `install-64` Dieses Skript installiert eine App auf 64-Bit-Betriebssystemen und ist 64-Bit-spezifisch.
Nebenbemerkung: Wenn eine App nur ein „install-32“-Skript hat, geht Pi-Apps davon aus, dass sie nur für 32-Bit-Betriebssysteme geeignet ist, und versteckt diese App bei 64-Bit-Installationen.
 - `uninstall` Dieses Skript deinstalliert die App. Es muss alle während der Installation vorgenommenen Änderungen rückgängig machen, aber mit einer Ausnahme: **Es darf keine benutzergenerierte Konfiguration dauerhaft löschen!** [Wir wollen nicht, dass die Minecraft-Welten von Leuten während eines Updates gelöscht werden.](https:// github.com/Botspot/pi-apps/issues/44)
</details>


<details>
<summary>App erstellen</summary>
Es ist ganz einfach, Ihre eigene Pi-App zu erstellen.

- Starten Sie zuerst die Pi-Apps-Einstellungen.
- Klicken Sie auf New App..
- Dadurch wird der Assistent zum Erstellen von Apps gestartet. Diese Reihe von Dialogfeldern führt Sie durch den Prozess der Erstellung Ihrer eigenen App.
- Es wird gefragt nach:
- **Name** der App (**erforderlich**)
- **Icon**: sollte ein **quadratisches** Icon sein, mindestens **64x64** px. Beachten Sie, dass Windows-.bmp-Symbole selten richtig skaliert werden.
- **Website**: Im Allgemeinen sollte der Website-Link darauf verweisen, wo Benutzer **Hilfe** und weitere **Informationen** über die App finden.
- OS-Architektur **Kompatibilität**: Wählen Sie aus, ob Ihre App **32-Bit**-kompatibel, **64-Bit**-kompatibel oder **beides** ist.
- **Beschreibung**: Erklären Sie einem totalen Noob-Benutzer, **was die App ist**, was die App **macht** und wie man sie zum Laufen bringt.
- **Credits**: Verdienen Sie sich Anerkennung für das Hinzufügen zu Pi-Apps! :)
- Auf den folgenden Seiten hilft Ihnen Pi-Apps dabei, Ihre eigenen **Bash-Skripte** zu erstellen, um die App zu installieren und zu deinstallieren.

### Erstellen eines `install`-Skripts

Was ist ein *bash script*? Ich bin froh, dass du gefragt hast.
Stellen Sie sich im Grunde diese Frage: „**Welche Befehle sollte ich in einem Terminal ausführen, um diese App zu installieren?**“
**Schreiben Sie einfach all diese Befehle in einer Datei auf** Pi-Apps öffnet sich für Sie.
Hier ist das Skript „install-32“ aus der Arduino-App: (zu finden unter „~/pi-apps/apps/Arduino/install-32“)

```bash
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}

wget https://downloads.arduino.cc/arduino-1.8.13-linuxarm.tar.xz || error "failed to download!"

tar -xf arduino-1.8.13-linuxarm.tar.xz || error "failed to extract with tar!"
arduino-1.8.13/install.sh || error "failed to run install as non-root user!"
sudo arduino-1.8.13/install.sh || error "failed run install as root user!"

rm $HOME/Desktop/arduino-arduinoide.desktop
rm arduino-1.8.13-linuxarm.tar.xz
exit 0
```
Gehen wir das Skript Zeile für Zeile durch.
- Dieses Zeug gehört an die Spitze aller Pi-Apps-Skripte. ⏬ Machen Sie sich darüber keine Sorgen.
```bash
#!/bin/bash

DIRECTORY="$(dirname "$(dirname "$( cd "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )")")"

function error {
  echo -e "\\e[91m$1\\e[39m"
  exit 1
}
```

- Dies lädt die Arduino-Software von [Arduinos Download-Seite](https://www.arduino.cc/en/software) herunter. ⏬

```bash
wget https://downloads.arduino.cc/arduino-1.8.13-linuxarm.tar.xz || error "failed to download!"
```

- Ach, aber was ist das ⏫? "Fehler"? Der **`error`**-Befehl wird in allen Pi-Apps-Skripten verwendet, um **zu beenden, wenn etwas schief geht**. Wenn zum Beispiel die obige Zeile aus irgendeinem Grund *fehlgeschlagen* hat, Arduino herunterzuladen, wird das Skript **anhalten und sprechen**. (im Terminal wird es mit einem roten Fehler beendet, der besagt: „Download fehlgeschlagen!“)
- Diese Zeile extrahiert den gezippten Ordner, den wir gerade heruntergeladen haben. ⏬ (Beachten Sie auch hier den Befehl „Fehler“, der uns benachrichtigt, wenn dieser aktuelle Befehl fehlschlägt)
```bash
tar -xf arduino-1.8.13-linuxarm.tar.xz || error "failed to extract with tar!"
```

- Diese beiden Befehle führen die integrierten Installations-Bash-Skripte von Arduino aus. ⏬
```bash
arduino-1.8.13/install.sh || error "failed to run install as non-root user!"
sudo arduino-1.8.13/install.sh || error "failed run install as root user!"
```

- Und dieser verbleibende Teil des Skripts wird anschließend unnötige Dateien bereinigen. ⏬
```bash
rm $HOME/Desktop/arduino-arduinoide.desktop
rm arduino-1.8.13-linuxarm.tar.xz
exit 0
```
- Beachten Sie, dass diese ⏫ Befehle keine `Fehler`s haben. Das liegt daran, dass es uns egal ist, ob diese Befehle fehlschlagen.

### Weitere Dinge, die Sie beachten sollten
Die Arduino-App war recht einfach, da sie bereits eigene Installationsskripte enthielt. Nicht alle Apps sind so. Nachfolgend finden Sie weitere Tipps, die sich als nützlich erweisen, wenn Sie Ihre eigenen Apps erstellen oder andere vorgefertigte Installationsskripts verstehen.

- Um ein Github-Repository herunterzuladen, können Sie `wget` nicht verwenden. Verwenden Sie stattdessen den Befehl „git clone“. Beispiel: `git clone https://github.com/Botspot/pi-apps`, wodurch das Git-Repository standardmäßig in den Ordner `~/pi-apps` heruntergeladen wird. (Fügen Sie wie üblich am Ende eine `|| error`-Klausel hinzu, falls der Download fehlschlägt.)
- Um ein Paket zu installieren, verwenden Sie nicht `apt`! Dies verursacht Probleme, egal welchen Ansatz Sie versuchen:
  - Ihre App könnte das „ffmpeg“-Paket installieren, wenn Sie die App installieren, und „ffmpeg“ deinstallieren, wenn Sie die App deinstallieren. Was ist hier das Problem? Einige Leute werden `ffmpeg` bereits auf dem System installiert haben und sich ziemlich ärgern, wenn es nach der Deinstallation Ihrer App verloren geht.
  - Um das obige Problem zu lösen, konnte Ihre App nur das `ffmpeg`-Paket installieren und *nicht einmal versuchen*, es zu deinstallieren. Diese Lösung *würde funktionieren*, ist aber eine sehr schlechte Wahl, sowohl für die Festplattennutzung als auch für die Pi-Apps-Richtlinie, bei der Benutzer erwarten, dass ein Deinstallationsskript alles rückgängig macht.
  - Lösung: **verwenden Sie nicht `apt`.** Verwenden Sie das Skript **`pkg-install`** von Pi-Apps. Pkg-install verwendet `apt`, aber es zeichnet auf, welche Pakete jede App installiert. Wenn Sie die App deinstallieren, deinstalliert das Skript „purge-installed“ diese zuvor notierten Pakete.
`pkg-install` Verwendung: 
`"${DIRECTORY}/pkg-install" "package1 package2 package3" "$(dirname "$0")" || exit 1`  
Das ⏫ entspricht ungefähr so etwas wie `sudo apt update && sudo apt install -y Paket1 Paket2 Paket3  || exit 1`.
Und um alle Pakete zu **entfernen**, die Ihre App zuvor installiert hat:
`"${DIRECTORY}/purge-installed" "$(dirname "$0")" || exit 1`  
Falls Sie sich fragen, wissen die Skripte `pkg-install` und `purge-installed` dank des `"$(dirname "$0")"`-Teils, welche App sie ausführt.
  - Shortcut: Erstellen Sie kleine Textdateien mit `echo` im Installationsskript. Viele Skripte verwenden diese Technik, um Dateien mit Menüschaltflächen zu erstellen:
```
echo "[Desktop Entry]
Name=Ultimaker Cura
GenericName=3D Printing Software
Comment=Cura converts 3D models into paths for a 3D printer. It prepares your print for maximum accuracy, minimum printing time and good reliability with many extra features that make your print come out great.
Exec=bash -c 'sudo modprobe fuse; ~/Cura.AppImage'
Icon=$(dirname $0)/icon-64.png
Terminal=false
Type=Application
MimeType=application/sla;application/vnd.ms-3mfdocument;application/prs.wavefront-obj;image/bmp;image/gif;image/jpeg;image/png;model/x3d+xml;
Categories=Graphics;Education;Development;Science;
Keywords=3D;Printing;
StartupNotify=true" > ~/.local/share/applications/cura.desktop
```
Dieses ⏫ wurde aus dem Skript „install-32“ der Cura-App entnommen. Es erstellt eine Datei unter `~/.local/share/applications/cura.desktop`. (Vergessen Sie nicht, das Deinstallationsskript entfernen zu lassen!)
  - Dateien löschen mit `rm /path/to/file-i-wanna-delete.txt`. Es empfiehlt sich, `rm -f` zu verwenden, um Fehler zu verbergen, falls die Datei nicht existiert. Um ganze Ordner zu löschen, verwenden Sie `rm -rf`.
  - Dateien mit `gio trash /path/to/file/or/folder-i-wanna-delete` in den Papierkorb verschieben.

### Erstellen eines `Deinstallations`-Skripts
Es sollte **alle Änderungen rückgängig machen**, die während der Installation vorgenommen wurden, mit einer Ausnahme: Beim Deinstallieren einer App dürfen die Konfigurationsdateien der App nicht gelöscht werden. [Wir wollen nicht, dass die Minecraft-Welten von Leuten während eines Updates gelöscht werden.](https://github.com/Botspot/pi-apps/issues/44)  
Hier ist das `uninstall`-Deinstallationsskript der Arduino-App. ⏬
```bash
#!/bin/bash
arduino-1.8.13/uninstall.sh
sudo arduino-1.8.13/uninstall.sh
rm -rf arduino-1.8.13
```
Möglicherweise bemerken Sie, dass die Zeilen „DIRECTORY=“ und „Funktionsfehler“ fehlen. ⏫ In diesem Fall ist es in Ordnung, sie wegzulassen, aber es ist schlechte Form. Das Aktualisieren der Arduino-App würde jetzt ein unnötiges Popup für alle Benutzer auslösen, sodass sie unverändert bleibt.
Erklärung des Skripts:
- Diese führen Skripte aus, die sich im Ordner von Arduino befinden. ⏬ Sie entfernen die Menüschaltflächen für uns und kümmern sich um den größten Teil des Deinstallationsprozesses. 
```
arduino-1.8.13/uninstall.sh
sudo arduino-1.8.13/uninstall.sh
```
- Und dies löscht den Arduino-Ordner. ⏬
```
rm -rf arduino-1.8.13
```
</details>


## Verzeichnisbaum
  - `~/pi-apps/` Dies ist der Hauptordner, der alles enthält. In allen Skripten wird es als `${DIRECTORY}`-Variable dargestellt. 
  - `CHANGELOG.md` [Diese Datei](https://github.com/Botspot/pi-apps/blob/master/CHANGELOG.md) ist eine schriftliche Historie für alle wichtigen Ereignisse für Pi-Apps, einschließlich Daten für wann Jede App wurde hinzugefügt. Es lohnt sich zu lesen! :)
    - `COPYING` Diese Datei enthält die GNU General Public License v3 für Pi-Apps.
    - „createapp“-GUI-Skript – dieses wird ausgeführt, wenn Sie in den Einstellungen auf „App erstellen“ klicken.
    ![App erstellen](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/create%20app.png?raw=true)
    - `gui` Das GUI-Hauptfenster. Dieses Skript ist für die Anzeige der App-Liste und der Detailseite verantwortlich. 
   ![Hauptfenster](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/main%20window.png?raw=true)
   - `install` Dieses Skript wird verwendet, um Pi-Apps zu installieren. Fügt ein paar Menüstarter hinzu und stellt sicher, dass YAD installiert ist.
   - `manage` Dieses Skript verwaltet die Installation, Deinstallation und Aktualisierung von Apps. Es überprüft oder aktualisiert keine Dateien außerhalb des Verzeichnisses „apps/“.
   - `pi-apps.desktop` Diese Datei ist ein .desktop-Launcher, genau derselbe wie der Haupt-Pi-Apps-Launcher im Menü.
   - `pkg-install` Wenn eine App einige `apt`-Pakete benötigt, um ausgeführt zu werden, führt ihr `install`-Skript `pkg-install` aus. Pkg-install zeichnet auf, welche App was installiert hat (übrigens im Ordner „installed-packages“). Wenn Sie also eine App deinstallieren, werden diese Pakete entfernt.
   - `preload` Dieses Skript generiert die App-Liste für das `gui`-Skript. Wenn seit dem letzten Start keine Dateien geändert wurden, wird "preload" die App-Liste nicht neu generieren, sondern stattdessen eine zuvor gespeicherte Version der Liste zurückgeben. Dieser Ansatz reduziert die Startzeit von Pi-Apps um etwa 1 Sekunde.
   - `purge-installed` Dies macht genau das Gegenteil von `pkg-install` Dieses Skript wird ausgeführt, wenn eine App deinstalliert wird. Purge-installed deinstalliert alle Pakete, die die App installiert hat.
   - `README.md` Sie lesen diese Datei gerade!
   - `settings` Dieses GUI-Skript wird ausgeführt, wenn Sie „Pi-Apps Settings“ aus dem Menü starten.
   ![Einstellungen](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/settings.png?raw=true)
   - `uninstall` Deinstalliert Pi-Apps und entfernt die Menüstarter. Bittet um Erlaubnis, YAD zu deinstallieren.
   - `updater` Dieses GUI-Skript wird jedes Mal ausgeführt, wenn das `gui`-Skript gestartet wird. Der Updater vergleicht zuerst das heutige Datum mit der Datei „last-update-check“. Wenn es an der Zeit ist, nach Updates zu suchen, sucht `updater` zuerst nach App-Updates und dann nach anderen Dateien/Ordnern, die geändert oder erstellt wurden. Wenn etwas aktualisiert werden kann, wird ein Dialogfeld geöffnet und um Erlaubnis zum Aktualisieren gebeten:
   ![Updates](https://github.com/Botspot/pi-apps/blob/master/icons/screenshots/updates%20available.png?raw=true)
   - `data/` Dieser Ordner enthält alle lokalen Daten, die nicht durch Updates überschrieben werden sollen.
     - `categories` - Dieses Verzeichnis speichert alles in Bezug auf die Kategorien, in denen sich Ihre Apps befinden. Derzeit enthält es nur eine Datei:
       - `structure` - Die Datei, die nachverfolgt, welche Apps sich in welchen Kategorien befinden. Es wird vom Pi-Apps-Kategorie-Editor bearbeitet.
     - `installed-packages/` Dies verfolgt alle APT-Pakete, die jede App installiert hat. In diesen Ordner wird vom `pkg-install`-Skript geschrieben.
     Wenn Pi Power Tools beispielsweise „`xserver-xephyr` und `expect` installiert, enthält die Datei `installed-packages/Pi Power Tools` „xserver-xephyr erwartet“.
     - `preload/` Dieses Verzeichnis wird vom `preload`-Skript verwendet, um die Startzeit von Pi-Apps zu verbessern.
       - `timestamps` Diese Datei speichert Zeitstempel für die zuletzt geänderte App, die zuletzt geänderte Einstellung und die zuletzt geänderte Statusdatei.
       Wenn einer dieser Einträge beim Aufruf von „preload“ nicht übereinstimmt, wird die App-Liste neu generiert.
       - `LIST` Diese Datei enthält die App-Liste. Der gesamte Inhalt der Datei wird in das YAD-Dialogfeld geleitet.
     - `settings/` Dies speichert die aktuellen Einstellungen, die vom Fenster 'Pi-Apps Settings' gespeichert wurden. Jede Datei enthält eine Einstellung. Beispielsweise enthält die Datei `settings/Preferred text editor` standardmäßig „geany“.
     - `status/` Dieser Ordner speichert alle Installationsinformationen für alle Apps.


	 Wenn Sie Zoom installieren, wird die Datei "status/Zoom" erstellt, die "installiert" enthält. Installierte Apps haben dieses Statussymbol in der App-Liste: ![installed](https://github.com/Botspot/pi-apps/blob/master/icons/installed.png?raw=true)
     Wenn die Installation nicht erfolgreich war, enthält die Datei „beschädigt“. Das entsprechende Symbol sieht so aus: ![corrupted](https://github.com/Botspot/pi-apps/blob/master/icons/corrupted.png?raw=true)
     Wenn die App erfolgreich deinstalliert wurde, ist das Symbol ![uninstalled](https://github.com/Botspot/pi-apps/blob/master/icons/uninstalled.png?raw=true)
     Wenn die App noch nie installiert oder deinstalliert wurde, existiert ihre „Status“-Datei nicht. Das Symbol dafür ist: ![none](https://github.com/Botspot/pi-apps/blob/master/icons/none.png?raw=true). Beachten Sie die leichte Menge an Rot in der Mitte. So kann man den Unterschied erkennen.
     - `update-status/` Dieser Ordner verfolgt, welche Apps aktualisiert werden können. Der Name jeder Datei ist von einer App, also speichert „update-status/Zoom“ den Aktualisierungsstatus der Zoom-App. Dieser Ordner wird immer dann aktualisiert, wenn `~/pi-apps/manage check-all` ausgeführt wird.
     `Nlatest` bedeutet, dass die App auf dem neuesten Stand ist.
     `new` bedeutet, dass die App neu aus dem Repository ist. (mit anderen Worten, es existiert nicht lokal)
     `lokal` bedeutet, dass die App nicht im Repository vorhanden ist.
     `updatable` bedeutet, dass die Version des Repositorys und die lokale Version nicht übereinstimmen und aktuallisierbar ist.
     - `hidelist` Diese Datei enthält App-Namen, die aus der App-Liste ausgeblendet werden sollen. `template` sollte immer vorhanden sein. Wenn Ihr Pi TwisterOS ausführt, enthält `hidelist` mehrere weitere App-Namen, wie zum Beispiel balenaEtcher.
      - `last-update-check` Enthält ein Datum in numerischer Form. (Der 1. Januar wäre `1`, der `31`. Dezember wäre `365`.) Das `updater`-Skript verwendet diese Datei, um zu verfolgen, wann zuletzt nach Updates gesucht wurde.

    - `etc/` Dieser Ordner ist im Grunde eine Erweiterung des Hauptordners `pi-apps/`. Sein Inhalt muss das Hauptverzeichnis nicht verstopfen, aber er kann nicht in `data/` abgelegt werden, da diese Dateien auf dem neuesten Stand gehalten werden sollten.
      - `setting-params/` Dies speichert die GUI-Einträge für das Einstellungsfenster. Wenn ich zum Beispiel eine neue Einstellung namens „Automatisch spenden“ mit den Parametern „Ja“ und „Nein“ hinzufügen wollte, wobei Ja die Standardeinstellung ist, würde ich eine neue Datei namens „setting-params/Auto spenden“ erstellen und es würde dies enthalten: 
        
     ```
     #Spende automatisch bei jedem Start von Pi-Apps an Botspot
     Yes
     No
     ```
     Wenn Sie nun die Einstellungen das nächste Mal öffnen, sehen Sie:
     ![auto-donate](https://i.ibb.co/nzBNgFT/auto-donate.png)
     Mit diesem dateibasierten Ansatz ist das Hinzufügen neuer Einstellungen (und/oder Parameter) viel einfacher und auf standardisierte Weise möglich. (Im Gegensatz zum Hinzufügen neuer Einstellungen durch Bearbeiten eines Bash-Skripts)
     - `bitlylink` - Einfaches Bash-Skript, das einen Pi-Apps-Analyselink abruft, falls aktiviert.
     - `categoryedit` - Dieses Skript ist der Kategorieeditor von Pi-Apps.
     - `git_url` Diese einfache Datei speichert diesen Link: https://github.com/Botspot/pi-apps
     Wenn Sie dieses Repository verzweigen und Änderungen vornehmen, möchten Sie, dass Pi-Apps nach Updates aus Ihrem Repository sucht, nicht aus diesem Hauptarchiv. Ändern Sie einfach die URL in dieser Datei, um Ihr Repository zu verwenden.
     - `preload-daemon` - Ein einfacher Wrapper für das `preload`-Skript. Es aktualisiert regelmäßig alle App-Listen für jede Kategorie für minimale Latenz.
     - `terminal-run` - Dieses Skript wird verwendet, um mehrzeilige Skripte in einem Terminal auszuführen. So einfach das klingt, in Wirklichkeit ist jedes Terminal anders. Um also mit allen Raspberry Pi-Betriebssystemen kompatibel zu sein, ist "terminal-run" erforderlich, um sicherzustellen, dass Terminalfenster geöffnet und ordnungsgemäß ausgeführt werden.
   - `icons/` Dies speichert alle Icons, die in verschiedene Dialoge eingebettet sind.
     - `screenshots/` Speichert Screenshots verschiedener Dialoge, die hauptsächlich als Bild-Hosting-Dienst verwendet werden, obwohl ich annehme, dass sie nützlich sein könnten, wenn ein Offline-Hilfedialog erstellt würde.
   - `update/` Dieser Ordner enthält die neueste Version des gesamten Pi-Apps-Repositorys. Sein Inhalt wird jedes Mal neu heruntergeladen, wenn das `updater`-Skript nach Updates sucht. Es wird verwendet, um Datei-Hashes zu vergleichen, zu erkennen, wann eine App oder Datei aktualisiert werden kann, und wird verwendet, um während einer Aktualisierung neue Dateiversionen in das Hauptverzeichnis „pi-apps/“ zu kopieren.
   
## Abzeichen
Wenn sich Ihre Anwendung auf Pi-Apps befindet, ziehen Sie bitte in Erwägung, dieses hübsche Abzeichen/diesen Hyperlink zu Ihrer README hinzuzufügen:
[![badge](https://github.com/Botspot/pi-apps/blob/master/icons/badge.png?raw=true)](https://github.com/Botspot/pi-apps)  
Code einbetten:
```
[![badge](https://github.com/Botspot/pi-apps/blob/master/icons/badge.png?raw=true)](https://github.com/Botspot/pi-apps)  
```

### Fragen und Antworten mit Botspot
 - Warum haben Sie Pi-Apps entwickelt?
> Ich bin schon lange traurig darüber, wie wenige Leute von Open-Source-RPi-Softwareprojekten wissen. Viele dieser Projekte sind äußerst nützlich und nützlich, aber es gab nie eine gute Möglichkeit, sie zu verbreiten.
> Die Repositories hosten sie nicht und sie werden normalerweise nicht sehr gut beworben, also wie sollen die Leute sie finden?
> Die meisten Leute finden sie nie.
> Eines Tages wurde mir klar: Warum nicht meinen eigenen App Store machen, der sich auf all die RPi-Softwareprojekte der Community da draußen spezialisiert? Es wird mehr Benutzern helfen, die Software zu finden, und gleichzeitig würde es eine supereinfache Möglichkeit bieten, sie zu installieren.
> (Was würden Sie lieber tun - auf eine glänzende Schaltfläche "Installieren" klicken oder eine Reihe von Befehlen aus einem skizzenhaften Blog-Tutorial kopieren und einfügen?)

 - Wie lange hat es gedauert, das zu programmieren?
> Ungefähr zwei Wochen fast ununterbrochenes Programmieren, um Pi-Apps von Grund auf zu erstellen. Und seitdem habe ich regelmäßig Fehler behoben, Probleme gelöst, neue Funktionen hinzugefügt und neue App-Einreichungen bearbeitet.

 - Ist Pi-Apps noch in der Entwicklung?
> Sicher ist! Die anfängliche Entwicklung ist größtenteils abgeschlossen, und ich sehe keine weiteren [wichtigen Funktionen](https://github.com/Botspot/pi-apps#to-do), die der Kernfunktionalität von Pi-Apps hinzugefügt werden. (außer vielleicht in Zukunft `apt`-Paket-Apps zuzulassen)
> Aber es gibt immer eine oder zwei Apps, die Aufmerksamkeit erfordern, und Dutzende von App-Anfragen. Es ist genug Arbeit, um ein *Team* von Entwicklern zu beschäftigen.

 - Wie kann ich helfen?
> - Es ist immer schön, in Foren und Kommentaren ein nettes Wort zu Pi-Apps zu hinterlassen. Zusätzlich dazu, dass Sie anderen helfen, diese nützliche Software zu finden, werden Sie möglicherweise einfach in die [Hall of Fame](https://github.com/Botspot/pi-apps#what-do-others-say-about-pi-apps )!
> - Sie können [spenden](https://paypal.me/josephmarchand), wenn Sie möchten. Das Geld geht an mich (abzüglich der Paypal-Gebühren) und unterstützt die zukünftige Open-Source-Entwicklung. Ein Teil des Geldes fließt in die Platzierung von [Prämien](https://github.com/ptitSeb/box86/issues/296) für Apps, die ich gerne von jemand anderem fertig gestellt sehen möchte, der über Fähigkeiten/Zeit verfügt, die ich nicht habe verfügen über.
> - Sie können die [Liste der App-Anfragen] (https://github.com/Botspot/pi-apps/issues) durchsehen und dabei helfen, die Skripte dafür zu erstellen.
> - Wenn Sie jemanden sehen, der sich auf Youtube, Reddit oder Facebook über eine kaputte App beschwert, ermutigen Sie ihn bitte, dem [Pi-Apps Discord](https://discord.gg/RXSTvaUvuu) beizutreten oder [ein Problem zu öffnen]( https://github.com/Botspot/pi-apps/issues/new), um das Problem zu lösen. (Ich bin nicht oft auf diesen Seiten.)
> - Sie könnten helfen, Probleme zu beheben/diagnostizieren, die andere haben.
