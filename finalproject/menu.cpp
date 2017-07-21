#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "user.h"

int main() {
	string a_id = "admin";
	string a_pwd = "123";

	string insert_id;
	string insert_pwd;

	vector<user> u;
	int count_u = 0;
	string u_name;
	string u_gender;
	int u_age;
	string u_pwd;
	int u_telno;
	string u_email;
	int type;

	bool loop = true;
	string choice1 = "0";
	bool check = true;
	string choice2;
	int data_column = 0;
	string choice3;

	do {
		cout << "1. Login\n2. Register\n";
		cin >> choice1;

		if (choice1 == "1") {

			do {
				cout << "\nID: ";
				cin >> insert_id;

				cout << "Password: ";
				cin >> insert_pwd;

				int u_length = u.size() + 1;
				for (int i = 0; i <= u_length; i++) {

					if (insert_id == a_id && insert_pwd == a_pwd) {
						check = false;
						type = 1;
						break;
					}

					//if (staff) {}

					if (u.at(i).getName() == insert_id && u.at(i).getPasswd() == insert_pwd) {
						check = false;
						type = 3;
						data_column = i;
						break;
					}
				}
			} while (check);

			if (type == 1) {

				do {
					cout << "\n1. Edit Profile\n2. Booking\n3. Add Customer\n4. Add Staff\n5. Edit Payroll\n6. Pay Salary\n7. Pay Slip Record\n0. Exit\n";
					cin >> choice2;

				} while (choice2 != "N" && choice2 != "n" && choice2 != "0" && choice2 != "0");

			}
			else if (type == 2) {

				do {
					cout << "\n1. Edit Profile\n2. Booking\n3. Add Custoemr\n0. Exit\n";
					cin >> choice2;

				} while (choice2 != "N" && choice2 != "n" && choice2 != "0" && choice2 != "0");

			}
			else if (type == 3) {

				do {
					cout << "\n1. Edit Profile\n2. Booking\n0. Exit";
					cin >> choice2;

					if (choice2 == "1") {

						do {
							u.at(data_column).print_edit();
							cout << "0. Exit\nChoice(1-6): ";
							cin >> choice3;

							if (choice3 == "1") {
								cout << ": ";
								cin >> u_name;

								u.at(data_column).setName(u_name);
							}
							else if (choice3 == "2") {
								cout << ": ";
								cin >> u_gender;

								u.at(data_column).setGender(u_gender);
							}
							else if (choice3 == "3") {
								cout << ":";
								cin >> u_age;

								u.at(data_column).setAge(u_age);
							}
							else if (choice3 == "4") {
								cout << ":";
								cin >> u_pwd;

								u.at(data_column).setPasswd(u_pwd);
							}
							else if (choice3 == "5") {
								cout << ":";
								cin >> u_telno;

								u.at(data_column).setTelno(u_telno);
							}
							else if (choice3 == "6") {
								cout << ":";
								cin >> u_email;

								u.at(data_column).setEmail(u_email);
							}
						} while (choice3 != "0");

					}
					else if (choice2 == "2") {

					}

				} while (choice2 != "N" && choice2 != "n" && choice2 != "0" && choice2 != "0");

			}

		}
		else if (choice1 == "2") {
			type = 3;

			cout << "User Name: ";
			cin >> u_name;

			cout << "Gender: ";
			cin >> u_gender;

			cout << "Age: ";
			cin >> u_age;

			cout << "Password: ";
			cin >> u_pwd;

			cout << "TelNo: ";
			cin >> u_telno;

			cout << "Email: ";
			cin >> u_email;

			user u_data(u_name, u_gender, u_age, u_pwd, u_telno, u_email, type);
			u.insert(u.begin() + count_u++, u_data);
		}
	} while (loop);

	return 0;
}