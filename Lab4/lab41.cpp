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
#include <fstream>

using namespace std;

void MedImage :: addannot(string &name, char &id){
	cout << "Please enter your name and id";
	cin >> name >> id;

	string mystring;
	cout << "Enter your comment below";
	getline (cin, mystring);
};

void MedImage :: seeimg(){
	system("start gimp-2.8.exe");
};

MRI :: MRI(string &imagetype, int &samperpix, int &bitall, string &photoint, int &et, int &en, int &imf, int &mfs, int &s){
	echotime = et; echonum = en; imagfreq = imf; magfstren = mfs; sar = s;

	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';

	cout << "Please enter the values for the following attributes:\n";
	cout << "Echo time, Echo Number, Image frequency, Magnetic Field Strength, SAR";
	cin >> et >> en >> imf >> mfs >> s;
};

US :: US(string &imagetype, int &samperpix, int &bitall, string &photoint, int &ni, int &vn, int &tt, int &fd, int &ln){
	nominterval = ni; viewnum = vn; trigtime = tt; focdepth = fd; lesnum = ln;

	imagetype = 'Type 2';
	if (photoint = "MONOCHROME2" || "PALETTE COLOR") {samperpix = 1;}
	else {samperpix = 3;}
	bitall = 8;
	photoint = 'PALETTE COLOR' || 'MONOCHROME2' || 'RGB' || 'YBR_FULL' || 'YBR_FULL_422' || 'YBR_PARTIAL_422' || 'YBR_RCT' || 'YBR_ICT' || 'YBR_PARTIAL_420';

	cout << "Please enter the values for the following attributes:\n";
	cout <<	"Nominal Interval, View Number, Trigger Time, Focus Depth, Lesion Number\n";
	cin >> ni >> vn >> tt >> fd >> ln;
};

CT:: CT(string &imagetype, int &samperpix, int &bitall, string &photoint, int &ext, int &gp, int &c, int &dtd, int &dtp){
	expotime = ext; genpow = gp; curr = c; dissourtodet = dtd; dissourtopat = dtp;

	imagetype = 'Type 1';
	samperpix = 1;
	bitall = 16;
	photoint = 'MONOCHROME1' || 'MONOCHROME2';

	cout << "Please enter the values for the following attributes:\n";
	cout << "Exposure time, Generator Power, Current, Distance-source-to-dectector, Distance-source-to-patient";
	cin >> ext >> gp >> c >> dtd >> dtp;
};

void MedImage :: typeofimage(int &image){
	cout << "Please specify if the image is 1. MRI \n 2. US \n or 3. CT: \n";
	cin >> image;

	if (image == 1){
		MRI mri(string &imagetype, int &samperpix, int &bitall, string &photoint, int &, int &, int &, int &, int &);
	}
	else if (image == 2){
		US us(string &imagetype, int &samperpix, int &bitall, string &photoint, int &, int &, int &, int &, int &);

	}
	else if (image == 3){
		CT ct(string &imagetype, int &samperpix, int &bitall, string &photoint, int &, int &, int &, int &, int &);
	}
	else
	{
		cout << "Please enter 1,2, or 3";
	}
};

void MedImage :: storeinfo(string imagetype, int samperpix, int bitall, string photoint){

	fstream myfile;
	myfile.open("MedImage.txt");
	myfile << "Imagetype: \t" << imagetype << "\n";
	myfile << "Samples per pixel: \t" << samperpix << "\n";
	myfile << "Bits Allocated: \t" << bitall << "\n";
	myfile << "Photo Interpretation: \t" << photoint << "\n";
	myfile.close();

};

