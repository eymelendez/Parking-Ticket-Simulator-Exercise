// PoliceOfficer.h

#pragma once

#include<iostream>
#include<iomanip>
#include<string>

using namespace::std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"

class PoliceOfficer
{
public:
	PoliceOfficer(); // Default Constructor
	PoliceOfficer(string aOfficerName, int aBadgeNumber); // Parameter Constructor
	PoliceOfficer(const PoliceOfficer & aPoliceOfficer); // Copy Constructor
	~PoliceOfficer(); // Destructor

	// Setters
	void setOfficerName(string aOfficerName);
	void setBadgeNumber(int aBadgeNumber);

	// Getters
	string getOfficerName() const;
	int getBadgeNumber() const;

	bool isExpired(double purchaseTime, double parkedTime);

private:

	string officerName;
	int badgeNumber;

};

