
#ifndef CARS_H
#define CARS_H
#include <iostream>
#include <string>

using namespace std;

class cars{

public: //encapsulation
	cars(){ //konstruktör
		regnr = "default";
		manuf = "default";
		model = "default";
		color = "default";
		awd = "default";
		price = 0;

	}
	bool setRegnr(string x); //prototyper
	void setManuf(string x);
	void setModel(string x);
	void setColor(string x);
	bool setAwd(string x);
	bool setPrice(int x);
	void printDetail();

private: //privata variablar.
	string regnr;
	string manuf;
	string model;
	string color;
	string awd;
	unsigned int price;



};


#endif