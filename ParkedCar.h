// ParkedCar.h

#pragma once

#include<iostream>

using namespace::std;

class ParkedCar
{
public:
	ParkedCar();
	ParkedCar(string aMake, string aModel, string aColor, string aLicenseNumber, double aMinutes);
	ParkedCar(const ParkedCar & aParkedCar);
	~ParkedCar();

	// Setters
	void setMake(string aMake);
	void setModel(string aModel);
	void setColor(string aColor);
	void setLicenseNumber(string aLicenseNumber);
	void setMinutesParked(double aMinutes);

	// Getters
	string getMake() const;
	string getModel() const;
	string getColor() const;
	string getLicenseNumber() const;
	double getMinutesParked() const;

	void printParkedCar() const;

private:

	string make;
	string model;
	string color;
	string licenseNumber;
	double minutesParked;

};

