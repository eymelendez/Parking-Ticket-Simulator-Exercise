// MAIN.cpp

#include<iostream>
#include<iomanip>

using namespace::std;

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"


int main() 
{
	bool status;

	PoliceOfficer officer;
	ParkingTicket officialTicket;
	string pname;
	int pbadge;
	int minutesParked;
	int purchasedMin;
	string col;
	string mk;
	string mod;
	string lic;

	/*PoliceOfficer po = new PoliceOfficer();*/

	cout << "OFFICER'S INFORMATION:" << endl;
	cout << "Enter the name of police officer: ";
	cin >> pname;

	officer.setOfficerName(pname);

	cout << "Enter the badge number: ";
	cin >> pbadge;

	officer.setBadgeNumber(pbadge);

	ParkingMeter meter; // Parking meter array of objects created

	ParkedCar* ticket = NULL;

	ParkedCar ticketCar;

	cout << "Enter the car's make: ";
	cin >> mk;

	ticketCar.setMake(mk);

	cout << "Enter the car's model: ";
	cin >> mod;

	ticketCar.setModel(mod);

	cout << "Enter the car's color: ";
	cin >> col;

	ticketCar.setColor(col);

	cout << "Enter the car's license number: ";
	cin >> lic;

	ticketCar.setLicenseNumber(lic);

	cout << "Enter the no. of minutes the car is parked: ";
	cin >> minutesParked;

	ticketCar.setMinutesParked(minutesParked);

	cout << "Enter the no. of minutes purchased for parking: ";
	cin >> purchasedMin;

	meter.setMinForParking(purchasedMin);

	status = officer.isExpired(ticketCar.getMinutesParked(), meter.getMinForParking());

	ticketCar.getMinutesParked();

	if (status == false)
	{
		ParkingTicket *pt = new ParkingTicket();
		pt->reportIllegalCar(ticketCar, meter, officer);


	}
	else 
	{
		cout << "Car is Legally Parked.";
	}


	system("pause");

	return 0;

} // end main. 30 de marzo de 2017 - Successful!