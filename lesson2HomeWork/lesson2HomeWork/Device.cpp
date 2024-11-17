#include "Device.h"

bool Device::isActive() const
{
	return _active;
}

void Device::activate()
{
	_active = true;
}

void Device::deactivate()
{
	_active = false;
}

void Device::init(unsigned int id, DeviceType type, std::string os)
{
	this->_ID = id; 
	this->_type = type;
	this->_os = os;
}

unsigned int Device::getID() const
{
	return this->_ID;
}

DeviceType Device::getType() const
{
	return this->_type;
}

std::string Device::getOS() const
{
	return this->_os;
}

