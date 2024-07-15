#pragma once

#include "ContactInfo.h"

bool addContactInfo(const ContactInfo& contactInfo);
bool deleteContactInfo(int id_of_contactinfo);
ContactInfo findContactInfo(int id_of_contactinfo);
bool updateContactInfo(int id_of_contactinfo, const ContactInfo& ContactInfo);