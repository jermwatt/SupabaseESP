#include <Arduino.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>

class Supabase
{
public:
  String url;
  String key;
  bool useAuth;
  String USER_TOKEN;
  unsigned long loginTime;
  String loginMethod;
  String phone_or_email;
  String password;
  String payload;

  void begin(String url_a, String key_a);

  int login_process();
  int login_email(String email_a, String password_a);
  int login_phone(String phone_a, String password_a);

  int insert(String table, String json, bool upsert);
  int select(String table, String column, int limit = 1);
  String getPayload();
};