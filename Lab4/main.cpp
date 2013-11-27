/*
 * main.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Rahim
 */

#include <iostream>
#include "lab4.hpp"
#include "lab41.cpp"

using namespace std;

int main(){

	Chart c;
	MedImage mi;

	int option;
	cout << "Do you want to:\n 1. Add a New Test,\n 2. Add an Annotation,\n or 3. Generate a Report?";
	cin >> option;

	switch(option){

	case 1:
		int newresult;
		cout << "Do you want to:\n 1. Add Medical Image, 2. Add Blood Test, or 3. Add Physical Test";
		cin >> newresult;

		switch(newresult){
		case 1:
			c.addtest();

		};
	}


return 0;
}



