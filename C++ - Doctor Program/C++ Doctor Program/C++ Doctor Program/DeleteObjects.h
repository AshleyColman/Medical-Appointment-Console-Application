#pragma once
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

#ifndef DeleteObjects
// Defube DeleteObjects

// Confirmation on whether to delete last object in the system
bool& DeleteLastObjectConfirmation(bool &bCheckPass, const string &sObjectTypePass, __int16 &iObjectSizePass);

// Polymorphism - Deletes last booking in the system
void DeleteLastObject(vector<Booking>*oBookingPass);

// Polymorphism - Deletes last doctor account in the system
void DeleteLastObject(vector<Doctor>*oDoctorPass);

// Polymorphism - Deletes last surgery account in the system
void DeleteLastObject(vector<Surgery>*oSurgeryPass);

// Polymorphism - Deletes last receptionist account in the system
void DeleteLastObject(vector<Receptionist>*oReceptionistPass);

#endif