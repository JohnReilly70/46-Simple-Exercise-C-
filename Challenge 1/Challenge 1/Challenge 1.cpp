// Challenge 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


float max(float value1, float value2) {
	if (value1 > value2) {
		return value1;
	}
	else {
		return value2;
	}
}

int main()
{
	float max_value;
	max_value = max(1, 2);
	cout << max_value << endl;
	max_value = max(10, 5);
	cout << max_value << endl;
	return 0;
}