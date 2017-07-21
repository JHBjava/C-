#pragma once
#ifndef Room_H
#define Room_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Room {

public:

	Room() {};
	Room(double p, string r) {
		room_type = r;
		price = p;

	}

	void setPrice(double p) {
		price = p;
	}
	double getPrice() {

		return price;
	}

	void setRoomType(string r) {
		room_type = r;
	}

	string getRoomType() {
		return room_type;
	}


	void roomPrint() {
		cout << "Price: " << price << endl;
		cout << "Room Type: " << room_type << endl;




	}

private:
	double price;
	string room_type;

};

#endif#pragma once