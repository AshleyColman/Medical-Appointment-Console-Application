#include "stdafx.h"
#include "System.h"
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <conio.h>
#include <ctime>

using namespace std;

// START OF SYSTEM BEHAVIOURS

// Prompts welcome text
void System::Welcome()
{
	cout << "Welcome to the Doctor's Surgery Program\n\n\n";
}

// Prompts user login
void System::LoginPromp()
{
	cout << "Please enter a username and password to login\n";
}

// Displays menu options for receptionists when logged in
void System::LoggedInMenu()
{
	/*
	cout << "\n\nMenu options\n";
	cout << "1: Book customer appointment, \t 2: Review all bookings in system, \t 3: View all doctors in system,\n";
	cout << "4: Add more doctor accounts, \t 5: Add more receptionist accounts, \t 6: Add more surgery accounts\n";
	cout << "7: Delete last booking in system, \t 8: Delete last doctor account, \t 9: Delete last surgery account\n";
	cout << "10: Delete last receptionist account, \t 11: Exit.\n";
	*/
	cout << "\n\nMenu options\n";
	cout << "1: Book customer appointment\n";
	cout << "2: Review all bookings in system\n";
	cout << "3: View all doctors in system\n";
	cout << "4: View all customers in system\n";
	cout << "5: View all surgeries in system\n";
	cout << "6: View all receptionists in system\n";
	cout << "7: Add more doctor accounts\n";
	cout << "8: Add more receptionist accounts\n";
	cout << "9: Add more surgery accounts\n";
	cout << "10: Delete last booking in system\n";
	cout << "11: Delete last doctor account\n";
	cout << "12: Delete last surgery account\n";
	cout << "13: Delete last receptionist account\n";
	cout << "14: Exit.\n";
}

// Displays menu options for receptionists for setting up the system
void System::SetupMenu()
{
	cout << "\n\nMenu options\n";

	// If the last option completed was adding surgery information print this menu
	if (sLastMenuOption == "SURGERY")
	{
		cout << "1: Add doctor accounts, 3: Exit.\n";
	}
	// If the last option completed was adding doctor information print this menu
	else if (sLastMenuOption == "DOCTOR")
	{
		cout << "2: Add surgery information, 3: Exit.\n";
	}
	// If it's the first time entering the system print this menu
	else
	{
		cout << "1: Add doctor accounts, 2: Add surgery information, 3: Exit.\n";
	}
}

// Gets the last menu option selected 
void System::LastMenuOption(const string &sLastOptionPass)
{
	sLastMenuOption = sLastOptionPass; // Gets the last menu option selected
}

// Error checking to stop the user from selecting the same option twice
bool System::PreviousChoiceErrorChecking(int iChoicePass, int iPreviousChoicePass, bool bCheckPass)
{
	// The the new choice entered is the same as the previous choice deny input
	if (iChoicePass == iPreviousChoicePass)
	{
		cout << "Incorrect input detected, please select from the choices\n";
		bCheckPass = false;
	}
	// If it's a new choice then allow the input
	else
	{
		bCheckPass = true;
	}

	return bCheckPass;
}

// Displays prompt for selecting doctor for customer in booking
void System::SelectDoctorPrompt()
{
	cout << "\nPlease select a doctor to assign to the customer\n\n";
}

// Displays prompt for selecting a surgery for customer in booking
void System::SelectSurgeryPrompt()
{
	cout << "\nPlease select a surgery to assign to the customer\n\n";
}

// END OF SYSTEM BEHAVIOURS