#include "stdafx.h"
#include "Accounts.h"
#include "ErrorCheck.h"
#include "Booking.h"
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <conio.h>
#include <ctime>

using namespace std;

// START OF DELETEOBJECTS BEHAVIOURS

// Confirmation on whether to delete last object in the system
bool& DeleteLastObjectConfirmation(bool &bCheckPass, const string &sObjectTypePass, __int16 &iObjectSizePass)
{
	bCheckPass = false; // Used to decide whether to delete or not
	__int16 iChoice = 0; // Used for getting the users choice input


	cout << "\nAre you sure you want to delete the last " << sObjectTypePass << " in the system?\n";
	cout << "1: YES\n";
	cout << "2: NO\n";

	cin >> iChoice;

	// Error checking to stop user from entering bad input such as text or special characters
	iChoice = OnlyIntegerErrorChecking(iChoice);

	// Error checking to stop user from selecting an option not on the menu
	iChoice = MenuOptionErrorChecking("DeleteLastObject", iChoice);

	if (iChoice == 1)
	{
		if (iObjectSizePass == 1)
		{
			bCheckPass = false; // Need at least 1 object in the system at all times, no deleting from the system
			cout << "\nAt least 1 " << sObjectTypePass << " account must be in the system, currently there is " << iObjectSizePass << " in the system\n";
		}
		else
		{
			bCheckPass = true; // YES, delete
		}
	}
	else
	{
		bCheckPass = false; // NO, don't delete
	}

	return bCheckPass;
}

// Polymorphism - Deletes last booking in the system
void DeleteLastObject(vector<Booking>*oBookingPass)
{
	oBookingPass[0].pop_back();
}

// Polymorphism - Deletes last doctor account in the system
void DeleteLastObject(vector<Doctor>*oDoctorPass)
{
	oDoctorPass[0].pop_back();
}

// Polymorphism - Deletes last surgery account in the system
void DeleteLastObject(vector<Surgery>*oSurgeryPass)
{
	oSurgeryPass[0].pop_back();
}

// Polymorphism - Deletes last receptionist account in the system
void DeleteLastObject(vector<Receptionist>*oReceptionistPass)
{
	oReceptionistPass[0].pop_back();
}

// END OF DELETEOBJECTS BEHAVIOURS