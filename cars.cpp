
#include "cars.h"

using namespace std;

bool cars::setRegnr(string y){ //accessors

	if (y.size() != 6) {
		cout << "     (Wrong format! 6 chars )" << endl;
		return false;
	}


	int tmp13 = 0, tmp46 = 0;
	char tempChar[6];

	for (int i = 0; i < 6; i++) {
		tempChar[i] = y[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int k = 65; k < 123; k++) {
			if (k > 90 && k < 97) {
				continue;
			}
			if ((int)tempChar[i] == k) {
				tmp13++;
			}
		}
	}


	for (int i = 3; i < 6; i++) {
		for (int k = 48; k < 58; k++) {
			if ((int)tempChar[i] == k) {
				tmp46++;
			}
		}
	}

	if (tmp13 != 3 || tmp46 != 3) {
		cout << "     (Wrong format! )" << endl;
		return false;
	}
	regnr = y;
	return true;
}

void cars::setManuf(string x){
	manuf = x;
}

void cars::setModel(string x){
	model = x;
}

void cars::setColor(string x){
	color = x;
}

bool cars::setAwd(string x){
	if (x == "yes" || x == "YES" || x == "no" || x == "NO") {
		awd = x;
		return true;

	}
	else{
		cout << "    Wrong format!  (yes/no)" << endl;
		return false;
	}
}


bool cars::setPrice(int x){
	if (x < 1) {
		cout << "    Price to low!" << endl;
		return false;
	}


	price = x;
	return true;
}

void cars::printDetail(){
	cout << "Manufacturer: " << manuf << endl;
	cout << "Model: " << model << endl;
	cout << "Reg nr: " << regnr << endl;
	cout << "Color: " << color << endl;
	cout << "AWD: "; cout << awd << endl;
	cout << "Price: " << price << endl << endl;
}
