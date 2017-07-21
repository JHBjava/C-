#ifndef Payroll_H
#define Payroll_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Payroll {

public:

	Payroll() {};
	Payroll(double s, double so, double c, double e) {
		salary = s;
		socso = so;
		commission = c;
		epf = e;
	}

	void setSalary(double s) {
		salary = s;
	}
	double getSalary() {

		return salary;
	}

	void setSocso(double so) {
		socso = so;
	}

	double getSocso() {
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
	double getPostcode() {

		return commission;
	}

	void PayrollPrint() {
		cout << "Salary: " << salary << endl;
		cout << "Socso: " << socso << endl;
		cout << "epf: " << epf << endl;
		cout << "Commission: " << commission << endl;

	}

private:
	double salary;
	double epf;
	double commission;
	double socso;

};

#endif#pragma once