// Challenge 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


template <class T, class U, class V>
T max(T value1, U value2, V value3)
{
	if (value1 > value2) {
		if (value1 > value3) {
			return value1;
		}
		else {
			return value3;
		}
	}
	else if (value2 > value3) {
		return value2;
	}
	else {
		return value3;
	}
}


int main()
{
	float max_value;
	max_value = max<int>(1, 2, 3);
	cout << max_value << endl;
	max_value = max<float>(2, 1, 1);
	cout << max_value << endl;
	max_value = max(2, 5, 1);
	cout << max_value << endl;
	max_value = max(2, 1, 3);
	cout << max_value << endl;
	max_value = max<float>(0.0, 5.10, 0.0);
	cout << max_value << endl;
    return 0;
}

