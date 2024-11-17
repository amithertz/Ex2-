#include "SocialNetwork.h"

void SocialNetwork::init(std::string networkName, int minAge)
{
	this->_networkName = networkName;
	this->_minAge = minAge;
	this->_profiles.init();
}
void SocialNetwork::clear()
{
	this->_networkName.clear();
	this->_minAge = 0;
	this->_profiles.clear();
}
std::string SocialNetwork::getNetworkName() const
{
	return this->_networkName;
}
int SocialNetwork::getMinAge() const
{
	return this->_minAge;
}
bool SocialNetwork::addProfile(Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() < this->_minAge)
	{
		return false;
	}
	else
	{
		this->_profiles.add(profile_to_add);
		return true;
	}
}
std::string SocialNetwork::getWindowsDevices() const
{
    std::string windowsDevices;
    ProfileNode* curr = this->_profiles.get_first();

    while (curr != nullptr)
    {
        Profile u = curr->get_data();
        DeviceNode* temp = u.getOwner().getDevices().get_first();

        while (temp != nullptr)
        {
            if (temp->get_data().getOS() == WINDOWS10 ||
                temp->get_data().getOS() == WINDOWS11 ||
                temp->get_data().getOS() == WINDOWS7)
            {
                if (!windowsDevices.empty()) {
                    windowsDevices += ", "; 
                }
                windowsDevices += "[" + std::to_string(temp->get_data().getID()) + ", " + temp->get_data().getOS() + "]";
            }
            temp = temp->get_next(); 
        }

        curr = curr->get_next(); 
    }

    return windowsDevices;
}