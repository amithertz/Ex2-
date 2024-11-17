#include "User.h"



void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->_id= id;
	this->_name = username;
	this->_age = age;
	_devices.init();
}
void User::clear()
{
	this->_id = 0;
	this->_name = "";
	this->_age = 0;
	_devices.clear();
}
unsigned int User::getID() const
{
	return this->_id;
}
unsigned int User::getAge() const
{
	return this->_age;
}
DevicesList& User::getDevices() 
{
	return this->_devices; 
}
void User::addDevice(const Device newDevice)
{
	DevicesList devices = getDevices();
	this->_devices.add(newDevice);

}
bool User::checkIfDevicesAreOn() const
{
    DeviceNode* current = this->_devices.get_first();

    if (current == nullptr) 
	{
        return true; 
    }

    while (current != nullptr) 
	{
        Device checkCurr = current->get_data();
        if (!checkCurr.isActive()) 
		{
            return false; 
        }
        current = current->get_next();
    }

    return true; 
}

std::string User::getUserName() const
{
	return this->_name;
}