/*
 * lab4.hpp
 *
 *  Created on: Nov 17, 2013
 *      Author: Rahim
 */

#ifndef LAB4_HPP_
#define LAB4_HPP_

class MedImage{

public:
// Data members:
	//image type
	//samples per pixel
	//bits allocated
	//photometric interpretation
// Constructors:
	MedImage();

// Functions:
	void checkres(); //launch external image viewer to display image
	void appendinfo(); // append info of medical-image chart to patient file
};

class MRI : public MedImage {
	//echo time
	//echo number
	//imaging frequency
	//magnetic field strength
	//SAR
};

class US : public MedImage {
	//number of stages
	//view number
	//trigger time
	//focus depth
	//lesion number
};

class CT : public MedImage {
	//exposure time
	//generator power
	//x-ray tube current
	//distance source-to-detector
	//distance source-to-patient
};

#endif /* LAB4_HPP_ */
