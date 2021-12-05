//Brendan Milligan 12-5-2021
//CIS-1202 Assignment #15B

#include<iostream>
#include<cmath>

using namespace std;

template <typename T>
T half(T val) {
	T res;
	res = val / 2;
	//checks if type is an integer
	if (*typeid(val).name() == 'i') {
		//If val is a decimal, then this will round it up or down
		if (res*2!= val) {
		//integers must be converted to floats in order to round
		round(static_cast<float>(res));
	}
	}
	return res;
}

int main() {
	int x=11;
	float y=5.25;
	double z=7.175;

	cout << half(x) << endl;
	cout << half(y) << endl;
	cout << half(z) << endl;

}