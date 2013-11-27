/*
 * baseclass.hpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Rahim
 */

#ifndef BASECLASS_HPP_
#define BASECLASS_HPP_

#include <iostream>
#include "lab4.hpp"
#include "main.cpp"

using namespace std;

virtual void Chart :: addtest(){

	int newresult;
	cout << "Do you want to:\n 1. Add Medical Image, 2. Add Blood Test, or 3. Add Physical Test";
	cin >> newresult;

	switch(newresult){
		case 1:					// Add Medical Image
			MedImage mi;
			ptr = &mi;
			ptr -> addtest();
			break;
		case 2:					// Add Blood Test
			break;

		case 3:					// Add Physical Test
			break;

		default:
			cout << "Please enter an option 1, 2, or 3!";

	} break;

};

void MedImage :: addtest(){

	seeimg();
	typeofimage(int &image);
	storeinfo(string imagetype, int samperpix, int bitall, string photoint);

};

#endif /* BASECLASS_HPP_ */
