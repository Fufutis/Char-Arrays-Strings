#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int linesize(char text[]);

int main() {
	int row = 1, maxrow = 0, maxlength = 0, max = -1, total = 0, totaltemp = 0;
	char line[200];
	char longestline[50];
	ifstream inputfile;
	inputfile.open("myfile.txt");
	if (!inputfile) {
		cout << "input file didnt open" << endl;
	}
	while (!inputfile.eof()) {
		inputfile.getline(line, 50);
		totaltemp += linesize(line);
		if (max < linesize(line)) {
			max = linesize(line);
			maxrow = row;
			maxlength = linesize(line);
			//strcpy(longestline, line);
			total += totaltemp;
			totaltemp = 0;
		}
		row++;
	}
	inputfile.close();
	inputfile.open("myfile.txt");
	cout << "The longest line is at row : " << maxrow << endl;
	cout << "The actual text of the line is :" << endl;
	for (int i = 0; i < total; i++) {
		inputfile >> line[i];
		if (i >= total-maxlength) {
			cout << line[i];
		}
	}
	cout << endl << "The length of the longest line is : " << maxlength << endl;
	inputfile.close();
	return 0;
}
int linesize(char text[]) {
	return strlen(text);
}