https://www.bitshopper.de/support/anleitungen/2pac/2pac-inbetriebnahme-linux-raspberry-pi/


2Pac Inbetriebnahme Linux/ Raspberry PI
Vorbereitung, Package Abhängigkeiten, Konfiguration und Build unter Raspbian – Kernel version: 4.4 (Debian 8.7.1) oder höher bzw. Ubuntu 16.04.1 LTS oder höher

Vorbereitung
Diese Anleitung beschreibt Setup und Konfiguration und Build jeweils mit einer neuen Raspbian (Debian) oder Ubuntu Installation. Für die Installation sind sudo Rechte notwendig. Root selbst wird nicht vorausgesetzt.

Erster Schritt ist die Aktualisierung des Systems und bereits installierter Pakete:

```
sudo apt-get update
sudo apt-get upgrade -y
```
Folgende Pakete müssen installiert werden, um die Paketabhängigkeiten von CGMiner aufzulösen:

build-essential: Compiler und Compile-Werkzeuge
git: source code repository
autoconf: Für den Build aus GIT benötigt.
automake: Für den Build aus GIT benötigt.
libtool: shared library Zugriff für CGMiner
pkg-config: Für Build und Kompilierung benötigt
libcurl4-openssl-dev: http connectivity für CGMiner
libudev-dev: USB support für CGMiner
libusb-1.0-0-dev: USB support für CGMiner
libncurses5-dev: Textbasiertes User Interface für CGMiner

```
sudo apt-get install -y build-essential git autoconf automake libtool pkg-config libcurl4-openssl-dev libudev-dev libusb-1.0-0-dev libncurses5-dev
```

Jetzt kann der CGMiner Branch aus GIT geklont werden:

```
mkdir -p mining/2pac; cd mining/2pac
git clone https://github.com/vthoang/cgminer.git
cd cgminer
```
Nach erfolgreichem klonen aus GIT kann der CGMiner nun kompiliert werden:
```
CFLAGS="-O2" ./autogen.sh --enable-gekko
make -j 2
```

Für Ubuntu 16.04.1 LTS oder höher unterscheidet sich nur das Build Kommando:
```
CFLAGS="-O2 -march=native" ./autogen.sh --enable-gekko
make -j 2
```
Der Parameter –enable-gekko aktiviert die GekkoScience Treiber für Compac und 2Pac Miner.

Danach kann das Binary folgendermaßen getestet werden:
```
./cgminer -n
```
Dieses Kommando listet die erkannten Miner auf. Hier sollte “2Pac BM1384 Bitcoin Miner” ausgegeben werden.

Zubehör
Der Miner benötigt insbesondere zum Betrieb mit einem Raspberry Pi einen USB Hub mit aktiver Stromversorgung, der in der Lage ist, mindestens 2 A pro USB Port zur Verfügung zu stellen. Gute Erfahrungen haben wir mit USB 2.0 Geräten von Anker und Orico gemacht. Vorsicht vor USB Hubs mit Intel USB 3.0 Chipsätzen. User berichten vermehrt von Kompatibilitätsproblemen. Ausführliche HUB-Diskussion für USB Stick Miner im Forum bitcointalk.org: hier (englischsprachig)

Für den sicheren Betrieb mit einer Taktfrequenz ab 150 MHz empfehlen wir die Verwendung eines geeigneten USB Lüfters. Gute Erfahrungen haben wir mit dem Arctic Breeze Mobile 92 mm gemacht. Sehr leise, leistungsstark und langlebig.

Inbetriebnahme
Das Kommando für den Start des 2Pac im Custom CGMiner in der Konsole lautet wie folgt (Beispiel):

```
cd ~/mining/2pac/cgminer
./cgminer -o stratum+tcp://pool.ckpool.org:3333 -u 1BURGERAXHH6Yi6LRybRJK7ybEm5m5HwTr -p x --suggest-diff 32 --gekko-2pac-freq 150
```
Die Pooldaten aus obigem Beispiel können mit eigenen Pooldaten ersetzt werden. Das obige Beispiel veranschaulicht den Betrieb im Solo-Mining Pool von Con Kolivas. Die Taktfrequenz kann durch Veränderung des Parameters gekko-2pac-freq geändert werden. Ein lüfterloser Dauerbetrieb wird nur für Frequenzen bis 100 MHz empfohlen.

Die Leistung des Miners variiert je nach eingestellter Taktfrequenz und Kernspannung und kann annäherungsweise mit folgender Formel berechnet werden:

Leistung in GH = 0.11 * MHz
Beispiel GH = 0.11 * 150  => Betrieb mit ca. 16,5 GH/s (+-15%) möglich.
Je größer die Hashrate umso mehr variiert die Leistung mit den Fertigungstoleranzen der verwendeten ASICs.
Die Leistungsaufnahme des Miners (siehe Abbildung):

2Pac Leistungsaufnahme mit Raspberry Pi

Für weitergehende Hilfe und Support empfiehlt sich ein Blick in der Supportforum auf bitcointalk.org (englischsprachig). 