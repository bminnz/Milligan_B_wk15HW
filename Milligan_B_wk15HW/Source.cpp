//Brendan Milligan CIS-1202
//12-3-2021 Programming Assignment #15
#include<iostream>


using namespace std;
//exception classes 
class invalidRangeException {};
class invalidCharacterException{};

//Function Prototype
char character(char start, int offset);

int main(){
	char start;
	int offset;
	//Testing function
	cout << character('b', 3) << endl;

	try {
		character('a', -1);
	}
	catch (invalidRangeException ) {
		cout << "Error! Invalid Range Exception" << endl;
	}
	try {
		character('?', 5);
	}
	catch (invalidCharacterException) {
		cout << "Error! invalid Character Exception" << endl;
	}
	try {
		character('a', 1);
	}catch(char start) {
		cout << character('a', 1) << endl;
	}
	try {
		character('C', 4);
	}
	catch (char start) {
		cout << character('C',4) << endl;
	}
	return 0;
}

char character(char start, int offset) {
	if ((start < 65 || start>90) && (start < 97 || start>122)) {
		throw invalidCharacterException();
	}
	int res = start + offset;
	if ((res < 65 || res>90) && (res < 97 || res>122))
		throw invalidRangeException();

	return char(res);
}

