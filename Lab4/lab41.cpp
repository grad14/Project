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

MRI :: MRI(int echotime, int echonum, int imagfreq, int magfstren, int sar){
	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';

	cout << "Please enter the values for the following attributes:\n";
	cin >> "Echo time:\t" >> echotime >> "Echo Number:\t" >> echonum >> "Image frequency:\t" >> imagfreq >> "Magnetic Field Strength:\t" >> magfstren >> "SAR:\t" >> sar;
};

US :: US(int nominterval, int viewnum, int trigtime, int focdepth, int lesnum){
	imagetype = 'Type 2';
	if (photoint == 'MONOCHROME2' || 'PALETTE COLOR')
		{samperpix = 1;}
	else {samperpix = 3;}
	bitall = 8;
	photoint = 'PALETTE COLOR' || 'MONOCHROME2' || 'RGB' || 'YBR_FULL' || 'YBR_FULL_422' || 'YBR_PARTIAL_422' || 'YBR_RCT' || 'YBR_ICT' || 'YBR_PARTIAL_420';

	cout << "Please enter the values for the following attributes:\n";
	cin >> "Nominal Interval:\t" >> nominterval >> "View Number:\t" >> viewnum >> "Trigger Time:\t" >> trigtime >> "Focus Depth:\t" >> focdepth >> "Lesion Number:\t" >> lesnum;
};

CT:: CT(int expotime, int genpow, int curr, int dissourtodet, int dissourtopat){
	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';

	cout << "Please enter the values for the following attributes:\n";
	cin >> "Exposure time:\t" >> expotime >> "Generator Power:\t" >> genpow >> "Current:\t" >> curr >> "Distance-source-to-dectector:\t" >> dissourtodet >> "Distance-source-to-patient:\t" >> dissourtopat;
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
