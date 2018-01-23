#include "Twitter.h"



Twitter::Twitter(String _APIkey)
{
  APIkey = _APIkey;
}

void Twitter::tweet(String tsData)
{
  if (_client.connect("api.thingspeak.com", 80))
  { 
    // Create HTTP POST Data
    tsData = "api_key="+APIkey+"&status="+tsData;
            
    _client.print("POST /apps/thingtweet/1/statuses/update HTTP/1.1\n");
    _client.print("Host: api.thingspeak.com\n");
    _client.print("Connection: close\n");
    _client.print("Content-Type: application/x-www-form-urlencoded\n");
    _client.print("Content-Length: ");
    _client.print(tsData.length());
    _client.print("\n\n");

    _client.print(tsData);
    
  }
  else
  {
    Serial.println("ERROR");
  }
}
