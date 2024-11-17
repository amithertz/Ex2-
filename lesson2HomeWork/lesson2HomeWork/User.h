#pragma once
#include <string>
#include "DeviceList.h"


class User
{
private:
	unsigned int _id = 0;
	std::string _name = "";
	unsigned int _age = 0;;
	DevicesList _devices;
public:
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	void addDevice(const Device newDevice);
	bool checkIfDevicesAreOn() const;
	DevicesList& getDevices();



};
