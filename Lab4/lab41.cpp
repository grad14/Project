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
	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';
};

US :: US(){
	imagetype = 'Type 2';
	//samperpix = 1;
	//bitall = 16;
	photoint = 'PALETTE COLOR' || 'MONOCHROME2' || 'RGB' || 'YBR_FULL' || 'YBR_FULL_422' || 'YBR_PARTIAL_422' || 'YBR_RCT' || 'YBR_ICT' || 'YBR_PARTIAL_420';
};

CT:: CT(){
	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';
};

int MedImage :: typeofimage(int image){
	cout << "Please specify if the image is 1. MRI \n 2. US \n or 3. CT: \n";
	cin >> image;

	if (image == 1){
		MRI mri;
	}
	else if (image == 2){
		US us;
	}
	else if (image == 3){
		CT ct;
	}
	else
	{
		cout << "Please enter 1,2, or 3";
	}

return(image);
};

void MedImage :: storeinfo(int &image){};
