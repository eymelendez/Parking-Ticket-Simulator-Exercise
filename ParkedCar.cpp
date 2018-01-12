// ParkedCar.cpp

#include<iostream>
#include<string>

using namespace::std;

#include"ParkedCar.h"

ParkedCar::ParkedCar()
{
	setMake(" ");
	setModel(" ");
	setColor(" ");
	setLicenseNumber(" ");
	setMinutesParked(0.0);
}

ParkedCar::ParkedCar(string aMake, string aModel, string aColor, string aLicenseNumber, double aMinutes)
{
	setMake(aMake);
	setModel(aModel);
	setColor(aColor);
	setLicenseNumber(aLicenseNumber);
	setMinutesParked(aMinutes);
}

ParkedCar::ParkedCar(const ParkedCar & aParkedCar)
{
	setMake(aParkedCar.getMake());
	setModel(aParkedCar.getModel());
	setColor(aParkedCar.getColor());
	setLicenseNumber(aParkedCar.getLicenseNumber());
	setMinutesParked(aParkedCar.getMinutesParked());
}

ParkedCar::~ParkedCar()
{
	cout << "Destroying objects..." << endl;
}

void ParkedCar::setMake(string aMake)
{
	make = aMake;
}

void ParkedCar::setModel(string aModel)
{
	model = aModel;
}

void ParkedCar::setColor(string aColor)
{
	color = aColor;
}

void ParkedCar::setLicenseNumber(string aLicenseNumber)
{
	licenseNumber = aLicenseNumber;
}

void ParkedCar::setMinutesParked(double aMinutes)
{
	minutesParked = aMinutes;
}

string ParkedCar::getMake() const
{
	return make;
}

string ParkedCar::getModel() const
{
	return model;
}

string ParkedCar::getColor() const
{
	return color;
}

string ParkedCar::getLicenseNumber() const
{
	return licenseNumber;
}

double ParkedCar::getMinutesParked() const
{
	return minutesParked;
}

void ParkedCar::printParkedCar() const
{
	cout << "Car Make: " <<  getMake()<< endl;
	cout << "Car Model :" << getModel() << endl;
	cout << "Car Color :" << getColor() << endl;
	cout << "Car License Number :" << getLicenseNumber() << endl;
	cout << "car Minutes Parked :" << getMinutesParked() << endl;
	
}
