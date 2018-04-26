# JMaccounting

This is an accounting software that allows you to enter expenses and create invoices. 
This was created on Ubuntu 16.04 LTS using Qt.

# How to install QT on Ubuntu 16.04
1. Open Terminal Ctrl+Alt+t

2. Copy and paste this into the terminal it will download Qt shoudl be around 1GB.
wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run

3. Copy and paste this into the terminal and Qt will install. 
chmod +x qt-opensource-linux-x64-5.7.0.run
./qt-opensource-linux-x64-5.7.0.run

4 qmake JMaccounting.pro -r -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
5 make in /home/javi/build-JMaccounting-Desktop_Qt_5_7_0_GCC_64bit-Debug
6 /home/javi/build-JMaccounting-Desktop_Qt_5_7_0_GCC_64bit-Debug/JMaccounting
