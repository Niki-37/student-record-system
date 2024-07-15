#include "ContactInfo.h"

ContactInfo::ContactInfo(int id_of_contactinfo, const std::string& address,
                         const std::string& email,
                         const std::string& phone_number,
                         const std::string& second_phone_number)
    : id_of_contactinfo{id_of_contactinfo},
      address{address},
      email{email},
      phone_number{phone_number},
      second_phone_number{second_phone_number} {}
