#pragma once
#include <string>

class ContactInfo {
   private:
    int id_of_contactinfo;
    std::string address;
    std::string email;
    std::string phone_number;
    std::string second_phone_number;

   public:
    ContactInfo(int id_of_contactinfo, const std::string& address,
                const std::string& email, const std::string& phone_number,
                const std::string& second_phone_number);

    // getters
    int getIdOfContactinfo() const;
    std::string getAddress() const;
    std::string getEmail() const;
    std::string getPhoneNumber() const;
    std::string getSecondPhoneNumber() const;

    // setters
    void setIdOfContactinfo(const std::string& address);
    void setEmail(const std::string& email);
    void setPhoneNumber(const std::string& phone_number);
    void setSecondPhoneNumber(const std::string& second_phone_number);
};