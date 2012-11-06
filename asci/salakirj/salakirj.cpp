#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string encrypt(string in, string key);
string decrypt(string in, string key);
int calcKey(string key);
string key;
string msg;

int main() {


	string key;
	string msg;

	int val;
	bool kysy;

	bool run = true;
	while(run) {
		cout << "\n\nGive the encryption key, please.\n>";
		fflush(stdin);
		getline(cin,key);
		cout << "\nAnd now the message.\n>";
		fflush(stdin);
		getline(cin,msg);

		kysy = true;
		while (kysy) {
			cout << "\n\n1 -> Encrypt\n2 -> Decrypt\n3 -> Quit\n\n>";
			fflush(stdin);
			cin >> val;
			switch (val) {
			case 1:
				cout << "Encrypted string: " << encrypt(msg,key);
				kysy = false;
				break;
			case 2:
				cout << "Decrypted string: " << decrypt(msg,key);
				kysy = false;
				break;
			case 3:
				run = false;
				break;
			default:
				cout << "\nWhat did you say?";
			}
		}

	}


	return 0;
}

int calcKey(string key) {
	int len = key.length();
	int keyval =0;
	for (int x=0; x < len; x++) {
		keyval += (int) key[x];
	}
	return (keyval / len) % 19 + 1;
}

string encrypt(string in, string keys) {
	int key = calcKey(keys);

	int len = in.length();

	ostringstream oss;
	int value;

	for (int x=0; x < len; x++) {
		value = (int) in[x];
		value += key;
		oss << (char) value;
	}
	return oss.str();
}

string decrypt(string in, string keys) {
	int key = calcKey(keys);

	int len = in.length();

	ostringstream oss;
	int value;

	for (int x=0; x < len; x++) {
		value = (int) in[x];
		value -= key;
		oss << (char) value;
	}
	return oss.str();
}