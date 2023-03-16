#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

void reverse(char a[]);

int main() {
	char field[100];
	ifstream inputfile;
	ofstream outputfile; //just checking something for my self
	//the out will be in the console

	inputfile.open("myfile.txt");					//DO not ("filename") twice in a program (last error was with ifstream inputfile("myfile.txt");)
	outputfile.open("outfile.txt");
	if (!inputfile) {								//checks if its open please always do that from now on because for somereason somefiles can just not work
		cout << "input didnt open";
	}
	while (!inputfile.eof()) {
		inputfile.getline(field, 50);				//name.getline(array,size)
		//inputfile >> field[i];					//1 by 1 character
		reverse(field);
		cout << field << endl;
	}
	inputfile.close();					//closes files
	outputfile.close();
	return 0;
}

void reverse(char text[]) {
	_strrev(text);			//reverses string
}