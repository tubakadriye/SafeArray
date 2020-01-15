#include "safe.h"
#include "safe.cpp"
#include <iostream>

using namespace std;

template <class Z>
void swaps_arr(Z *A, Z *B, int n);

template <class M>
M avg(M *A, int n);

template <typename S>
S amax(safe<S> &A ,int n);

template <class U>
int find(U* array, U value, int n);

int main() {

	double arr1[] = { 1,6,4,5 };
	double arr2[] = { 7,6,7,8 };

	safe<double> C(3);
	C[0] = 1.1;
	C[1] = 2.3;
	C[2] = 3.3;
	

	double c;
	c = amax(C, 3);
	cout << "c :" << c << endl;

	for (int i = 0; i < 3; i++)
	{
		if (C[i] == c) cout << "index: " << i << endl;
	}

	cout << "average:" << endl;
	cout << avg(arr1, 4) << endl;

	cout << "arr1" << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr1[i] << endl;
	}

	cout << "arr2" << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr2[i] << endl;
	}

	swaps_arr(arr1, arr2, 4);

	cout << "arr1" << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr1[i] << endl;
	}

	cout << "arr2" << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr2[i] << endl;
	}

	char arr3[] = "tuba!";
	char arr4[] = "hello";
	char arr5[] = "tuba";
	cout << "average tuba : " << avg(arr5, 4) << endl;
	cout << "average: " << avg(arr4, 5) << endl;

	cout << "arr3" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr3[i] << endl;
	}

	cout << "arr4" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr4[i] << endl;
	}


	swaps_arr(arr3, arr4, 5);

	cout << "arr3" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr3[i] << endl;
	}

	cout << "arr4" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr4[i] << endl;
	}

	double arr[] = { 7,6,7,8,3,5,6,7,8 };
	C[11] = 4;
	return 0;

}

template <class Z>
void swaps_arr(Z *A, Z *B, int n) {
	//int n;
	//A = new double[n];
	//B = new double[n];
	//n = len(A);
	Z temp;
	for (int i = 0; i < n; i++) {
		temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}

template <class M>
M avg(M *A, int n) {
	M average;
	M sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum = sum + A[i];
	}
	average = sum / n;
	return average;
}

template <typename S>
S amax(safe<S> &A, int n) {
	S l = A[0];
	for (int i = 1; i < n; i++) {
		if (A[i] > l) l = A[i];
	}

	return l;
}

template<class U>
int find(U* array, U value, int n)
{
	for (int j = 0; j < n; j++)
		if (array[j] == value)
			return j;
}


