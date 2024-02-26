#include <iostream>
#include <filesystem>
#include <string>
#include <cctype>
using namespace std;

bool isNumber(const std::string str) {
	for (char c : str) {
		if (!std::isdigit(c)) {
			return false;
		}
	}
	return true;
}

int main() {
	string folderPath, input;

	// Getting desired operation
	cout << "Select program number to scan or enter 'addNewProgram' to add to the list.\n";
	cin >> input;

	// Check type of operation.
	if (isNumber(input) == true) {
		cout << "Starting scan for chosen directory...\n";
			return 0;
	}
	else if (input == "addNewProgram") {

	}
	
}