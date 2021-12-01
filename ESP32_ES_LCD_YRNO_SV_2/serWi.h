#ifndef serWi_h
#define serWi_h

/****CONFIG*******************************/

/*****************************************/

#include <Arduino.h>
#include "WiFi.h"
#include "DNSServer.h"
#include "ESPAsyncWebServer.h"    //https://github.com/me-no-dev/ESPAsyncWebServer



class serWi
{
  public:
    void initserWi();  
  private:
    int _pin;
};

#endif
