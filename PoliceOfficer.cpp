// PoliceOfficer.cpp

#include<iostream>
#include<string>

using namespace::std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"

PoliceOfficer::PoliceOfficer()
{
	setOfficerName("");
	setBadgeNumber(0);
}

PoliceOfficer::PoliceOfficer(string aOfficerName, int aBadgeNumber)
{
	setOfficerName(aOfficerName);
	setBadgeNumber(aBadgeNumber);
}

PoliceOfficer::PoliceOfficer(const PoliceOfficer & aPoliceOfficer)
{
	setOfficerName(aPoliceOfficer.getOfficerName());
	setBadgeNumber(aPoliceOfficer.getBadgeNumber());
}

PoliceOfficer::~PoliceOfficer()
{
	cout << "Destroying Objects..." << endl;
}

void PoliceOfficer::setOfficerName(string aOfficerName)
{
	officerName = aOfficerName;
}

void PoliceOfficer::setBadgeNumber(int aBadgeNumber)
{
	badgeNumber = aBadgeNumber;
}

string PoliceOfficer::getOfficerName() const
{
	return officerName;
}

int PoliceOfficer::getBadgeNumber() const
{
	return badgeNumber;
}

bool PoliceOfficer::isExpired(double purchaseTime, double parkedTime)
{
	if (parkedTime - purchaseTime > 0)
	{

		return true;
	}
	else 
	{
		return false;
	}
}
