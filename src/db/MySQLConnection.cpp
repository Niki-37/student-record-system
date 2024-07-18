#include "MySQLConnection.h"

#include <string>

MySQLConnection::MySQLConnection(const std::string& host,
                                 const std::string& user,
                                 const std::string& password,
                                 const std::string& dbname)
    : host{host},
      user{user},
      password{password},
      dbname{dbname},
      conn{nullptr} {
}

MySQLConnection::~MySQLConnection() {
    close();
}