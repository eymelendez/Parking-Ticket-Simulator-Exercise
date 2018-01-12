// ParkingTicket.h

#pragma once

#include<iostream>

using namespace::std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"PoliceOfficer.h"

class ParkingTicket
{
public:
	ParkingTicket(); // Constructor
	ParkingTicket(double aFine); // Parameter Constructor
	ParkingTicket(const ParkingTicket & aParkingMeter); // Copy Constructor
	~ParkingTicket(); // Destructor

	// Setters
	void setFine(double aFine);

	// Getters
	double getFine() const;

	// Print
	void reportIllegalCar(ParkedCar aParkedCar, ParkingMeter aParkingMeter, PoliceOfficer aPoliceOfficer);


private:

	double fine;
	double illegallyParkedHr;

};