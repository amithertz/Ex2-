#include "Page.h"

void Page::init()
{
	this->_status = "";
	this->_posts = "";
}
std::string Page::getPosts() const
{
	return this->_posts;
}
std::string Page::getStatus() const
{
	return this->_status;
}
void Page::clearPage()
{
	this->_status.clear();
	this->_posts.clear();
}
void Page::setStatus(std::string status)
{
	this->_status += status;
}
void Page::addLineToPosts(std::string newLine)
{ 
	this->_posts += newLine + '\n';
}