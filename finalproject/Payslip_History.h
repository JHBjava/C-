#ifndef PAYSLIP_HISTORY_H
#define PAYSLIP_HISTORY_H

#include <iostream>
#include <string>
using namespace std;

class Payslip_History {
private:
	string u_name;
	double salary;
	double socso;
	double epf;
	double commission;
	string month;
	int year;

public:
	Payslip_History() {

	}

	Payslip_History(string u, double sa, double so, double e, double c, string m, int y) {
		u_name = u;
		salary = sa;
		socso = so;
		epf = e;
		commission = c;
		month = m;
		year = y;
	}

	void setName(string n) {
		u_name = n;
	}

	string getName() {
		return u_name;
	}

	void setSalary(double sa) {
		salary = sa;
	}

	double getSalary() {
		return salary;
	}

	void setSocso(double so) {
		socso = so;
	}

	int getSocso() {
		return socso;
	}

	void setEpf(double e) {
		epf = e;
	}

	double getEpf() {
		return epf;
	}

	void setCommission(double c) {
		commission = c;
	}

	int getCommission() {
		return commission;
	}

	void setMonth(string m) {
		month = m;
	}

	string getMonth() {
		return month;
	}

	void setYear(int y) {
		year = y;
	}

	int getYear() {
		return year;
	}

	void print() {

	}
};

#endif