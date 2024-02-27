#include <iostream>
#include <filesystem>
#include <string>
using namespace std;

// Function to check if the input is a number.
bool isNumber(const string& str) {
	for (char c : str) {
		if (!isdigit(c)) {
			return false;
		}
	}
	return true;
}

int main() {
	string programPath, input;
	string newProgram = "addNewProgram";
	int check = 0;

	// Getting desired operation.
	cout << "Select program number to scan or enter 'addNewProgram' to add to the list.\n";
	cin >> input;
	
	// Checking for invalid input.
	while (true) {
		if (isNumber(input) == true)
			break;
		else if (input.compare(newProgram) == 0)
			break;
		cout << "Invalid input.\n";
		cout << "Select program number to scan or enter 'addNewProgram' to add to the list.\n";
		cin >> input;
	}
	
	// Check type of operation.
	if (isNumber(input)) {
		cout << "Starting scan for chosen program...\n";
			return 0;
	}
	else if (input == "addNewProgram") {
		cout << "Enter {program_name}, {path_to_program}\n"; 
		cin >> newProgram;
	}
	
	return 0;
}