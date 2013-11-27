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
	system("start gimp-2.8.exe");
};

MRI :: MRI(int et, int en, int imf, int mfs, int s){
	echotime = et; echonum = en; imagfreq = imf; magfstren = mfs; sar = s;

	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';

	cout << "Please enter the values for the following attributes:\n";
	cin >> "Echo time:\t" >> et >> "Echo Number:\t" >> en >> "Image frequency:\t" >> imf >> "Magnetic Field Strength:\t" >> mfs >> "SAR:\t" >> s;
};

US :: US(int ni, int vn, int tt, int fd, int ln){
	nominterval = ni; viewnum = vn; trigtime = tt; focdepth = fd; lesnum = ln;

	imagetype = 'Type 2';
	if (photoint == 'MONOCHROME2' || 'PALETTE COLOR')
		{samperpix = 1;}
	else {samperpix = 3;}
	bitall = 8;
	photoint = 'PALETTE COLOR' || 'MONOCHROME2' || 'RGB' || 'YBR_FULL' || 'YBR_FULL_422' || 'YBR_PARTIAL_422' || 'YBR_RCT' || 'YBR_ICT' || 'YBR_PARTIAL_420';

	cout << "Please enter the values for the following attributes:\n";
	cin >> "Nominal Interval:\t" >> ni >> "View Number:\t" >> vn >> "Trigger Time:\t" >> tt >> "Focus Depth:\t" >> fd >> "Lesion Number:\t" >> ln;
};

CT:: CT(int ext, int gp, int c, int dtd, int dtp){
	expotime = ext; genpow = gp; curr = c; dissourtodet = dtd; dissourtopat = dtp;

	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';

	cout << "Please enter the values for the following attributes:\n";
	cin >> "Exposure time:\t" >> ext >> "Generator Power:\t" >> gp >> "Current:\t" >> c >> "Distance-source-to-dectector:\t" >> dtd >> "Distance-source-to-patient:\t" >> dtp;
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
