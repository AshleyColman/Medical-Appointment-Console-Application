#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <conio.h>
#include <ctime>

using namespace std;

#ifndef ErrorCheck
// Define ErrorCheck

string HidePasswordDetails(); // Hides password details when the user is entering them into the system
__int16& OnlyIntegerErrorChecking(__int16 &iNumberPass); // Makes sure the user only inputs integers when required
__int16 ZeroOrHigherErrorChecking(string sObjectTypePass, __int16 iNumberPass); // Used for minimum number error checking
__int16& MenuOptionErrorChecking(const string &sMenuTypePass, __int16 &iChoicePass); // Makes sure the user only selects from the options provided
__int16& OptionErrorChecking(__int16 &iChoicePass, const __int16 &iObjectSizePass); // Checks to make sure the user only selects from the options available for sugery and doctor, error checking		
__int32& PhoneNumberOnlyIntegerErrorChecking(__int32 &iNumberPass); // Checks if bad input has been entered such as letters or special characters, error checking for the phone number as __int16 is too small for large number input

#endif
