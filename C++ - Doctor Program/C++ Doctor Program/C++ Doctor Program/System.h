#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <conio.h>
#include <ctime>

using namespace std;

#ifndef System
// Define System

// System class
class System
{
public:
	void Welcome(); // Prompts welcome text
	void LoginPromp(); // Prompts user login
	void SetupMenu(); // Displays menu options for receptionists for setting up the system
	void LoggedInMenu(); // Displays menu options for receptionists when logged in
	void LastMenuOption(const string &sLastOptionPass); // Gets the last menu option selected 
	bool PreviousChoiceErrorChecking(int iChoicePass, int iPreviousChoicePass, bool bCheckPass); // Error checking to stop the user from selecting the same option twice
	void SelectDoctorPrompt(); // Displays prompt for selecting doctor for customer in booking
	void SelectSurgeryPrompt(); // Displays prompt for selecting a surgery for customer in booking
private:
	string sLastMenuOption; // Used in the SetupMenu function to display the correct menu options based on the previous choice chosen
};

#endif