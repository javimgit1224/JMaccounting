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
# How to run the program on your own Linux distribution
1. Download and extract all the files in the same folder.
2. Open a terminal inside the folder or open a terminal and move its directory to the folder containg the files. 
3. Copy and paste the following code.
4. sudo apt-get install g++
5. sudo apt-get install make
6. sudo apt-get install qt5-default
7. qmake
8. make
9. ./JMaccounting
