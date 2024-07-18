#pragma once

#include <mysql/mysql.h>

#include <string>

class MySQLConnection {
   private:
    MYSQL* conn;
    std::string host;
    std::string user;
    std::string password;
    std::string dbname;

   public:
    MySQLConnection(const std::string& host, const std::string& user,
                    const std::string& password, const std::string& dbname);
    ~MySQLConnection();

    bool connect();
    bool close();
    MYSQL* getConnection();
};