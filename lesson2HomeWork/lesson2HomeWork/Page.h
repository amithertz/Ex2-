#pragma once
#include "User.h"

class Page
{
public:
	void init();
	std::string getPosts() const;
	std::string getStatus() const;
	void clearPage();
	void setStatus(std::string status);
	void addLineToPosts(std::string newLine);
private:
	std::string _status;
	std::string _posts;
};