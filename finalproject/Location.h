#ifndef Location_H
#define Location_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Location {

public:

	Location() {};
	Location(string c, string s, string st, int p){
		country = c;
		state = s;
		street = st;
		postcode = p;
	}

	void setCountry(string c) {
		country = c;
	}
	string getCountry() {

		return country;
	}

	void setState(string s) {
		state = s;
	}

	string getState() {
		return state;
	}

	void setStreet(double st) {

		street = st;
	}
	string getStreet() {

		return street;
	}
	void setPostcode(int p) {

		postcode = p;
	}
	int getPostcode() {

		return postcode;
	}

	void locationPrint() {
		cout << "Country: " << country << endl;
		cout << "State: " << state << endl;
		cout << "Street: " << street << endl;
		cout << "Postcode: " << postcode << endl;



	}

private:
	string street;
	string state;
	string country;
	int  postcode;




};



#endif#pragma once