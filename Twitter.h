#ifndef _Twitter_h
#define _Twitter_h

#include "WiFi.h"

class Twitter
{
  public :
    Twitter(String _APIkey);
    void tweet(String tsData);
  private :
    String APIkey;
    WiFiClient _client;
};


#endif
