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

class MedImage{

protected:
	string imagetype; 	// attribute: image type
	int samperpix; 		// attribute: samples per pixel
	int bitall; 		// attribute: bits allocated
	string photoint; 	// attribute: photometric interpretation
	string image; 		// variable to determine type of image

public:
	string name; char id;
	MedImage();								// Constructor to create MedImage object
	void addannot(string name, char id); 	// MedImage contains annotation/comment - name/id associated with it
	void seeimg(); 							// launch external image viewer to display image i.e. checks results of class MedImage
	void typeofimage(string image); 		// function allows radiologist to specify type of image
	void storeinfo(); 						// append info of medical-image chart to patient file (array)
	// complete storeinfo function
};


class MRI : public MedImage {

private:
	int echotime; 		// echo time
	int echonum; 		// echo number
	int imagfreq; 		// imaging frequency
	int magfstren; 		// magnetic field strength
	int sar; 			// SAR

public:
	MRI(); 				// use initilization list to specify common attributes

};

class US : public MedImage {

private:
	int nominterval; 	// nominal interval
	int viewnum; 		// view number
	int trigtime; 		// trigger time
	int focdepth; 		// focus depth
	int lesnum; 		// lesion number

public:
	US(); 				// use initilization list to specify common attributes
};

class CT : public MedImage {

private:
	int expotime; 		// exposure time
	int genpow;	 		// generator power
	int curr; 			// x-ray tube current
	int dissourtodet; 	// distance source-to-detector
	int dissourtopat; 	// distance source-to-patient

public:
	CT(); 				// use initilization list to specify common attributes
};

#endif /* LAB4_HPP_ */
