# LXDE
https://wiki.debian.org/de/LXDE

LXDE wurde entwickelt, um gut mit Computern am unteren Ende des Leistungsspektrums zusammenzuarbeiten, wie z.B. älteren ressourcenbeschränkten Maschinen, Netbooks der neuen Generation und anderen kleinen Computern.

## LXDE in Debian
LXDE ist eine der Arbeitsumgebungsoptionen (Desktop) im DebianDesktopHowTo.

## Installation
Ein Minumum der Arbeitsumgebung wird mit:

```
sudo apt-get install lxde-core
```
installiert.

Der Desktop mit allen Elementen:

```
sudo apt-get install lxde
```
Eine komplette Debian LXDE-Desktop-Umgebung (ab Debian 7.0 "Wheezy").:
```
sudo apt-get install task-lxde-desktop
```

# LXDE Starten
GDM / KDM / LightDM
Keine zusätzliche Konfiguration für GDM / KDM / LightDM erforderlich: Wähle einfach die Option LXDE im Menü des Anmeldebildschirms.


## XDM
Für XDM' muss die Datei {{~/.xsession} in Heimatverzeichnis vorhanden sein. Wenn noch keine vorhanden ist, dann einfach erstellen XDM liest diese Datei als Skript. Weitere Informationen finden Sie in der XDM-Dokumentation. Die letzte Zeile in Ihrer

~/.xsession sollte so ausschauen:

```
sudo exec startlxde
```

Damit LXDE mit startx, startet

```
sudo exec startlxde
```

in die Datei ~/.xinitrc schreiben.

Eine alternative Möglichkeit, den standardmäßigen Sitzungsmanager systemweit zu ändern, besteht darin, den Link zu aktualisieren, den Debian in /etc/alternatives/ setzt:

Hiermit kann man den Desktop bestimmen, der nach dem Neustart des Systems aktiv ist oder wird. 
```
sudo update-alternatives --config x-session-manager
```

Sie erhalten eine Liste der Optionen. Wählen Sie startlxde', um LXDE als Standard-Sitzungsmanager systemweit auszuwählen. 


# Tastaturlayout wechseln
Zuerst müssen Sie die notwendigen Tastaturlayouts in die Konfigurationsdatei {/etc/default/keyboard}} einfügen (siehe auch: Keyboard im Debian Wiki).

Hier ist ein Beispiel mit 5 Layouts (Deutsch, US-Englisch, Ukrainisch, Russisch, und Französisch) und <Alt>+<Shift> als Tastenkombination für Layoutänderungen:

```
# KEYBOARD CONFIGURATION FILE

# Consult the keyboard(5) manual page.

XKBMODEL="pc105"
XKBLAYOUT="de,us,ua,ru,fr"
XKBVARIANT=""
XKBOPTIONS="grp:alt_shift_toggle"

BACKSPACE="guess"
```
Damit die Änderungen wirksam werden, müssen Sie folgenden Befehl ausführen:
```
sudo udevadm trigger --subsystem-match=input --action=change
```
Danach können Sie dem LXPanel ein "Keyboard Layout Switcher" Applet hinzufügen und es anschließend testen.

https://github.com/search?q=lxde
https://sourceforge.net/projects/lxde/files/