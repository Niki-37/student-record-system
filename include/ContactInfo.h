#pragma once
#include <string>

class ContactInfo {
 public:
  int id;
  std::string address;
  std::string email;
  std::string phone_number;
  std::string second_phone_number;

  ContactInfo(int id, const std::string& address, const std::string& email,
              const std::string& phone_number,
              const std::string& second_phone_number);
};