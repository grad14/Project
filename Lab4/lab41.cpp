/*
 * lab41.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Rahim
 */

#include <iostream>
#include <string.h>
#include <cstdlib>
#include "lab4.hpp"

using namespace std;

void MedImage :: addannot(string name, char id){
	cout << "Please enter your name and id";
	cin >> name >> id;

	string mystring;
	cout << "Enter your comment below";
	getline (cin, mystring);
};

void MedImage :: seeimg(){
	system("start gimp-2.8.exe MRI.jpg");
};

MRI :: MRI(){
	// FILL IN INITIALIZATIONS
};

US :: US(){
	// FILL IN INITIALIZATIONS
};

CT:: CT(){
	// FILL IN INITIALIZATIONS
};

string MedImage :: typeofimage(string image){
	cout << "Please specify if the image is an MRI, US, or CT image:";
	cin >> image;

switch(image){

case 'MRI':
	MRI mri;
	break;

case 'US':
	US us;
	break;

case 'CT':
	CT ct;
	break;
}

return(image);
};

void MedImage :: storeinfo(string &image){};
