#include "safe.h"
#include <iostream>

using namespace std;

//double safearray::arr[LIMIT];


template<class T>
safe<T>::safe()
{
	//static const int LIMIT = 6;
	n = 0;
}

template<class T>
safe<T>::safe(int N)
{
	//static const int LIMIT = 6;

	if (N < 0 || N >= LIMIT) {
		cout << "index out of bounds" << endl;
		exit(1);
	}
	n = N;
	arr = new T[n];
}

template<class T>
void safe<T>::sort()
{
	for (int i = 0; i < n - 1; i++) // loop for the iterations of each tour
	{
		for (int j = 0; j < n - i - 1; j++) //loop for each iteration of the successive elements of the array
		{
			if (arr[j] > arr[j + 1]) {
				T temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}



template<class T>
safe<T>::~safe()
{
	delete arr;
	cout << "decons." << endl;
}

template <class T>
T& safe<T>::operator[](int i) {

	if (i < 0 || i >= LIMIT) {
		cout << "index out of bounds" << endl;
		exit(1);
	}

	return arr[i];
}

