# gtkmm-example

https://stackoverflow.com/questions/17039942/example-of-using-webkitgtk-with-gtkmm-3-0

## Debian Install:
apt-get install libgtkmm-3.0-dev  #https://www.gtkmm.org/en/download.html  
apt-get install libwebkit2gtk-4.0-dev  #https://elementaryos.stackexchange.com/questions/3532/fatal-error-with-webkit2gtk-4-0-webkit2-h  

## example01
g++ example01.cc `pkg-config gtkmm-3.0 --libs --cflags` `pkg-config webkit2gtk-4.0 --libs --cflags` -std=c++11
