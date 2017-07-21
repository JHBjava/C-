#include <iostream>
#include <string>
using namespace std;

int main() {
	string a_id = "admin";
	string a_pwd = "123";

	string insert_id;
	string insert_pwd;

	string u_name;
	string u_gender;
	int u_age;
	string u_pwd;
	int telno;
	string email;
	int type;

	bool loop = true;
	string choice1 = "0";
	bool check = true;
	string choice2;

	do {
		cout << "1. Login\n2. Register\n";
		cin >> choice1;

		if (choice1 == "1") {

			do {
				cout << "\nID: ";
				cin >> insert_id;

				cout << "Password: ";
				cin >> insert_pwd;

				for (int i = 0; i <= 0; i++) {
					if (insert_id == a_id && insert_pwd == a_pwd) {
						check = false;
						type = 1;
						break;
					}

				}
			} while (check);

			if (type == 1) {
				
				do {
					cout << "\n1. Edit Profile\n2. Booking\n3. Add Customer\n4. Add Staff\n5. Edit Payroll\n6. Pay Salary\n7. Pay Slip Record\n0. Exit\n";
					cin >> choice2;

				} while (choice2 != "N" && choice2 != "n" && choice2 != "0" && choice2 != "0");

			}else if (type == 2) {

				do {
					cout << "\n1. Edit Profile\n2. Booking\n3. Add Custoemr\n0. Exit\n";
					cin >> choice2;

				} while (choice2 != "N" && choice2 != "n" && choice2 != "0" && choice2 != "0");

			}else if (type == 2) {

				do {
					cout << "\n1. Edit Profile\n2. Booking\n0. Exit";
					cin >> choice2;

				} while (choice2 != "N" && choice2 != "n" && choice2 != "0" && choice2 != "0");

			}

		}else if (choice1 == "2") {
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
			cin >> telno;
			
			cout << "Email: ";
			cin >> email;


		}
	} while (loop);

	return 0;
}