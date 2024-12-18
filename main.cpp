#include <iostream>
#include <string>
using namespace std;

int main (){
	
	// username n password
	string tamu_admin;
	string usernameUser, passwordUser;
	string repeat;

	do {
		cout << "==========================" << endl;
		cout << "Login Sebagai Tamu? (y/n) ";
		cin >> tamu_admin;
		
		cout << endl;
		
		if (tamu_admin == "y"){
			cout << "Login Sebagai Tamu Berhasil!";
			break;
		}else if (tamu_admin == "n"){
			// user input
			cout << "==================" << endl;
			cout << "Login Your Account" << endl;
			cout << "==================" << endl;
			cout << "Username : ";
			cin >> usernameUser;
			cout << "Password : ";
			cin >> passwordUser;
		}
			
		// validasi Login user
		if(usernameUser == "admin123" && passwordUser == "katasandi"){
			cout << "Login berhasil";
		}else {
			cout << "Login gagal";
		}
		

	cout << endl;	
	cout << "ulangi login? (y/n) ";
	cin >> repeat;
	cout << endl;
		
	} while (repeat == "y" || repeat == "Y");
	
	
	cin.get();
	return 0;
}
