#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		     //
													     //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
													     //
/// ///////////////////////////////////////////////////////


class Device
{
private:
	bool _active;
	unsigned int _ID ;
	std::string _os;
	DeviceType _type;
public:
	bool isActive() const; // check device activation status
	void activate(); 
	void deactivate();
	void init(unsigned int id, DeviceType type, std::string os);
	unsigned int getID() const;
	DeviceType getType() const;
	std::string getOS() const;

};

