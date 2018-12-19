#ifndef USER_HPP
#define USER_HPP

#include <string>

class User
{
public:
  User(int ID, const std::string &name, const std::string &surname)
  {
    mID = ID;
    mUserName = name;
    mUserSurname = surname;
  }

private:
  int mID;
  std::string mUserName;
  std::string mUserSurname;
};

#endif /* USER_HPP */