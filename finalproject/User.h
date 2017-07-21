#ifndef USER_H;
#define USER_H;

#include <iostream>
#include <string>
using namespace std;

#include "Location.h"
#include "Payroll.h"

class user {
private:
	string u_name;
	string u_gender;
	int u_age;
	string u_passwd;
	int u_telno;
	string u_email;
	int u_type;
	Location location;
	Payroll payroll;

public:
	user() {

	}

	user(string n, string g, int a, string p, int t, string e, int ty) {
		u_name = n;
		u_gender = g;
		u_age = a;
		u_passwd = p;
		u_telno = t;
		u_email = e;
		u_type = ty;
	}

	user(string n, string g, int a, string p, int t, string e, int ty, Location lo, Payroll pa) {
		u_name = n;
		u_gender = g;
		u_age = a;
		u_passwd = p;
		u_telno = t;
		u_email = e;
		u_type = ty;
		location = lo;
		payroll = pa;
	}

	void setName(string n) {
		u_name = n;
	}

	string getName() {
		return u_name;
	}

	void setGender(string g) {
		u_gender = g;
	}

	string getGender() {
		return u_gender;
	}

	void setAge(int a) {
		u_age = a;
	}

	int getAge() {
		return u_age;
	}

	void setPasswd(string p) {
		u_passwd = p;
	}

	string getPasswd() {
		return u_passwd;
	}

	void setTelno(int t) {
		u_telno = t;
	}

	int getTelno() {
		return u_telno;
	}

	void setEmail(string e) {
		u_email = e;
	}

	string getEmail() {
		return u_email;
	}

	void setType(int ty) {
		u_type = ty;
	}

	int getType() {
		return u_type;
	}

	void print_edit() {
		cout << "\n\n1. Name: " << this->getName() << "\n2. Gender: " << this->getGender() << "\n3. Age: " << this->getAge() << "\n4. Password: " << this->getPasswd() << "\n5. Telno: " << this->getTelno() << "\n6. Email: " << this->getEmail() << endl;
	}
};

#endif