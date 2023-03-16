#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main() {
	ifstream inputfile;
	char answer='y';
	string name, surn, cname, csurn;
	while (answer != 'n') {
		cout << "Please enter your name: ";
		cin >> name;
		cout << "Please enter your surname: ";
		cin >> surn;
		inputfile.open("myfile.txt");						//we open the file inside the while loop so it starts over everytime
		while (!inputfile.eof()) {
			inputfile >> cname >> csurn;
			if (name == cname && surn == csurn) {
				cout << name <<" " << surn << ", do we have class today ?" << endl;
			}
		}
		inputfile.close();
		cout << "Try again : y / n ? ";
		cin >> answer;
	}

}
