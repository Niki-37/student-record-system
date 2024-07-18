#include "ContactInfo.h"

ContactInfo::ContactInfo(int id_of_contactinfo, const std::string& address,
                         const std::string& email,
                         const std::string& phone_number,
                         const std::string& second_phone_number)
    : id_of_contactinfo{id_of_contactinfo},
      address{address},
      email{email},
      phone_number{phone_number},
      second_phone_number{second_phone_number} {
}

int ContactInfo::getIdOfContactinfo() const {
    return id_of_contactinfo;
}
std::string ContactInfo::getAddress() const {
    return address;
}
std::string ContactInfo::getEmail() const {
    return email;
}

std::string ContactInfo::getPhoneNumber() const {
    return phone_number;
}

std::string ContactInfo::getSecondPhoneNumber() const {
    return second_phone_number;
}

void ContactInfo::setIdOfContactinfo(const std::string& address) {
    this->address = address;
}

void ContactInfo::setEmail(const std::string& email) {
    this->email = email;
}

void ContactInfo::setPhoneNumber(const std::string& phone_number) {
    this->phone_number = phone_number;
}

void ContactInfo::setSecondPhoneNumber(const std::string& second_phone_number) {
    this->second_phone_number = second_phone_number;
}