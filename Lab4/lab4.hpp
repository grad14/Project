/*
 * lab4.hpp
 *
 *  Created on: Nov 17, 2013
 *      Author: Rahim
 */

#ifndef LAB4_HPP_
#define LAB4_HPP_

#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

class Chart {

public:
	static Chart * ptr;
	Chart();				// houses Medical Image class, Blood Test class, and Physical Test class
	virtual void addtest();
	void addannotation();
	void genreport();
	virtual ~Chart(); // destructor to prevent dervied class object to be deleted from a base class pointer
};


class MedImage : public Chart {

protected:
	string imagetype; 	// attribute: image type
	int samperpix; 		// attribute: samples per pixel
	int bitall; 		// attribute: bits allocated
	string photoint; 	// attribute: photometric interpretation
	int image; 			// variable to determine type of image

public:
	string name; char id;
	MedImage();								// Constructor to create MedImage object
	virtual ~MedImage();    				// destructor to prevent dervied class object to be deleted from a base class pointer

	void addtest();							// Scenario #1
	void addannot(string &name, char &id); 	// Scenario #2

	void seeimg(); 							// launch external image viewer to display image i.e. checks results of class MedImage
	void typeofimage(int &image); 			// function allows radiologist to specify type of image
	void storeinfo(string imagetype, int samperpix, int bitall, string photoint); 						// append info of medical-image to patient file (array)

};


class MRI : public MedImage {

private:
	int echotime; 		// echo time
	int echonum; 		// echo number
	int imagfreq; 		// imaging frequency
	int magfstren; 		// magnetic field strength
	int sar; 			// SAR

public:
	MRI(string &imagetype, int &samperpix, int &bitall, string &photoint, int &, int &, int &, int &, int &); 	// use initilization list to specify common attributes
	virtual ~MRI();
};

class US : public MedImage {

private:
	int nominterval; 	// nominal interval
	int viewnum; 		// view number
	int trigtime; 		// trigger time
	int focdepth; 		// focus depth
	int lesnum; 		// lesion number

public:
	US(string &imagetype, int &samperpix, int &bitall, string &photoint, int &, int &, int &, int &, int &); 	// use initilization list to specify common attributes
	virtual ~US();
};

class CT : public MedImage {

private:
	int expotime; 		// exposure time
	int genpow;	 		// generator power
	int curr; 			// x-ray tube current
	int dissourtodet; 	// distance source-to-detector
	int dissourtopat; 	// distance source-to-patient

public:
	CT(string &imagetype, int &samperpix, int &bitall, string &photoint, int &, int &, int &, int &, int &);   // use initilization list to specify common attributes
	virtual ~CT();
};

#endif /* LAB4_HPP_ */
