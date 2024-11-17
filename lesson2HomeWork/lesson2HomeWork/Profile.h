#pragma once
#include "Page.h"
#include "UserList.h"

class Profile
{
public:
	void init(const User owner);
	void clear();
	User getOwner() const;
	void setStatus(const std::string new_status);
	void addPostToProfilePage(const std::string post);
	void addFriend(const User friend_to_add);
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
	void changeWordInStatus(std::string word_to_replace, std::string new_word);
	void changeAllWordsInStatus(std::string word);

private:
	User _user;
	Page _page;
	UserList _usersList;
};
