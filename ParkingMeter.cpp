// ParkingMeter.cpp

#include<iostream>

using namespace::std;

#include"ParkingMeter.h"


ParkingMeter::ParkingMeter()
{
	setMinForParking(0.0);
}

ParkingMeter::ParkingMeter(double aMinForParking)
{
	setMinForParking(aMinForParking);
}

ParkingMeter::ParkingMeter(const ParkingMeter & aParkingMeter)
{
	setMinForParking(aParkingMeter.getMinForParking());
}

ParkingMeter::~ParkingMeter()
{
	// cout << "Destroying Objects..." << endl;
}

void ParkingMeter::setMinForParking(double aMinForParking)
{
	minForParking = aMinForParking;
}

double ParkingMeter::getMinForParking() const
{
	return minForParking;
}
