/*
 * main.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Rahim
 */

#include <iostream>
#include "lab4.hpp"
#include "lab41.cpp"
#include "baseclass.hpp"

using namespace std;

int main(){

	Chart C;
	C * pointer;

	int option;
	cout << "Do you want to:\n 1. Add a New Test,\n 2. Add an Annotation,\n or 3. Generate a Report?";
	cin >> option;

	switch(option){

		case 1: // Add New Test
			pointer = &C;
			pointer -> addtest();
			break;
		case 2: // Add an Annotation
			break;

		case 3: // Generate a Report
			break;

		default:
			cout << "Please enter an option 1, 2, or 3!";

		} break;

	case 2: // Add Annotation

	case 3: // Generate Report

	default:
		cout << "Please enter a validn option!";
	}

return 0;
}



