//
//  main.cpp
//  TestConsollApp
//
//  Created by Emil Magnusson on 2014-06-05.
//  Copyright (c) 2014 Emil Magnusson. All rights reserved.
//
//#include <sqlite3.h>
//#include <ncurses.h>

#include <iostream>
#include <string>
#include "cars.h"

//test

using namespace std;

int main(int argc, const char * argv[])
{
	int antcar;
	cout << "Enter amount of cars you want to regist: "; cin >> antcar;
	cars* myCars = new cars[antcar];

	for (int i = 0; i < antcar; i++) {

		string temp;
		int iTemp;

		cout << "Register new car: " << endl;

		do {
			cout << "REGNR: "; cin >> temp;
		} while (myCars[i].setRegnr(temp) == false);


		cout << "MANUFACTOR: "; cin >> temp; myCars[i].setManuf(temp);
		cout << "MODEL: "; cin >> temp; myCars[i].setModel(temp);
		cout << "COLOR: "; cin >> temp; myCars[i].setColor(temp);


		do{
			cout << "AWD: "; cin >> temp;
		} while (myCars[i].setAwd(temp) == false);

		do{
			cout << "PRICE: "; cin >> iTemp;
		} while (myCars[i].setPrice(iTemp) == false);

		myCars[i].printDetail();

	}


	return 0;
}







