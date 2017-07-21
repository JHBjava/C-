#ifndef Booking_H
#define Booking_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

#include "Room.h";


class Booking {

public:

	Booking() {};
	Booking(vector<Room> r, double t, string ti) {
		room = r;
		total_Price = t;
		time = ti;


	}

	void setRoom(vector<Room> r) {
		room = r;


	}

	vector<Room> getRoom() {


		return room;
	}
	void setTotalPrice(double t) {
		total_Price = t;


	}

	double	getTotalPrice() {

		return total_Price;
	}
	void setTime(string t) {
		time = t;


	}

	string	getTime() {

		return time;
	}




	void bookingPrint() {





	}

private:

	vector<Room> room;
	double total_Price;
	string time;





};

#endif