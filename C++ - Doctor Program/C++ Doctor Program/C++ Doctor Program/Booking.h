#pragma once
#include "stdafx.h"
#include "Accounts.h"
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <conio.h>
#include <ctime>

using namespace std;

#ifndef Booking
// Define Booking

// Booking class
class Booking : public ID
{
public:
	Booking(); // Booking constructor
	~Booking(); // Booking destructor
	bool& BookingCostConfirmation(bool &bCheckPass, __int16 &iChoicePass); // Gets confirmation on the £25 booking cost for an appointment
	void GetBookingDetails(const __int16 &iDoctorNumberPass, const __int16 &iSurgeryIDPass, const string &sDoctorNamePass, const string &sCustomerNamePass, const string &sCustomerAilmentPass, const string &sBookingDatePass); // Get and store booking details
	void ReviewAllBookings(); // Review all bookings within the system using customer and doctor details
	__int16 ReturnDoctorID(); // Returns doctor ID back to add 1 appointment slot back to the correct doctor tied to the last booking in the system
protected:
	string sCustomerName; // Customer's name
	string sCustomerAilment; // Customer's ailment
	string sDoctorName; // Doctor's name customer's booking is assigned to
	string sBookingDate; // Date booking was made
	__int16 iDoctorID; // Doctor's ID customer's booking is assigned to
	__int16 iSurgeryID; // Surgeries ID customer's booking is assigned to 
	float fCost; // Cost of the booking
};

#endif
