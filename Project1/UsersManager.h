#pragma once
#include "User.h"
#include <unordered_map>
#include <fstream>

class UsersManager : public User
{
public:
	static std::unordered_map<std::string, User> userList;
	void static adduser(User user);
	bool static login(std::string username, std::string password);
	bool static signup(std::string username, std::string password);
public:
	void static writedata();
	void static readdata();


private:
	void static writeusers();
	void static writeevents();
	void static readevents();
	void static readusers();
	
};

