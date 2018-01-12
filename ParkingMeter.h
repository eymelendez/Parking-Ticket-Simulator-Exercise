// ParkingMeter.h

#pragma once

#include<iostream>

using namespace::std;

class ParkingMeter
{
public:
	ParkingMeter();
	ParkingMeter(double aMinForParking); // Parameter Constructor
	ParkingMeter(const ParkingMeter & aParkingMeter ); // Copy Constructor
	~ParkingMeter(); // Destructor

	// Setter
	void setMinForParking(double aMinForParking);

	// Getter
	double getMinForParking() const;


private:

	double minForParking;
};



