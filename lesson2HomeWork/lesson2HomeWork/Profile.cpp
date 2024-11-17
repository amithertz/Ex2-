#include "Profile.h"
#include <iostream>

void Profile::init(const User owner)
{
	this->_user = owner;
	this->_page.init();
	this->_usersList.init();
}
void Profile::clear()
{
	this->_usersList.clear();
}
User Profile::getOwner() const
{
	return this->_user;
}
void Profile::setStatus(const std::string new_status)
{
	this->_page.setStatus(new_status);
}
void Profile::addPostToProfilePage(const std::string post)
{
	this->_page.addLineToPosts(post);
}
void Profile::addFriend(const User friend_to_add)
{
	this->_usersList.add(friend_to_add);
}
std::string Profile::getPage() const
{
	return "Status: " + this->_page.getStatus() + "\n"
		+ "*******************" + "\n"
		+ "*******************" + "\n"
		+ this->_page.getPosts();
}
std::string Profile::getFriends() const
{
	UserNode* current = this->_usersList.get_first();
	std::string friendsList = "";
	if (current == nullptr)
	{
		return "";
	}

	while (current != nullptr)
	{
		User u = current->get_data();
		friendsList += u.getUserName();
		if (current->get_next() != nullptr)
		{
			friendsList += ','; 
		}
		current = current->get_next();
	}
	return friendsList;
}
std::string Profile::getFriendsWithSameNameLength() const
{
	int currLength = this->_user.getUserName().length();
	UserNode* current = this->_usersList.get_first();
	std::string friendsList = "";
	if (current == nullptr)
	{
		return "";
	}

	while (current != nullptr)
	{
		User u = current->get_data();
		if (u.getUserName().length() == currLength)
		{
			if (!friendsList.empty())  // If the friendsList is not empty, add a comma
			{
				friendsList += ',';
			}
			friendsList += u.getUserName();
		}
		current = current->get_next();
	}

	return friendsList;
}

void Profile::changeWordInStatus(std::string word_to_replace, std::string new_word)
{
}
void Profile::changeAllWordsInStatus(std::string word)
{
}
