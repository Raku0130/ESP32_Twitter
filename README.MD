ESP32_Twitter


ThingSpeak(https://thingspeak.com )を用いてESP32からWiFI経由でツイートするためのライブラリ
使用前にThingSpeakでアカウントを作成しThingTweet(https://thingspeak.com/apps/thingtweets )でTwitterのアカウントと連携しAPIkeyを取得してください


Example

#include <WiFi.h>
#include <Twitter.h>


char* MYSSID = "SSID";
char* PASSWORD = "PASS";
String thingtweetAPIKey = "APIKEY";
   

Twitter tw(thingtweetAPIKey);

void setup() {
   WiFi.begin(MYSSID, PASSWORD);
   while (WiFi.status() != WL_CONNECTED)
      delay(100);
}

void loop() {
  tw.tweet("Tweet Test");
  while(1);
}



Other

ThingSpeakをとりあえず使ってみたくて作ってみた
もっといろいろ機能つけるつもりでライブラリ化したけど途中で飽きちゃってする意味あったのかなと
