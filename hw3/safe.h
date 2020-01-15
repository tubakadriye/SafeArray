#ifndef SAFE_H
#define SAFE_H
//using namespace std;
static const int LIMIT = 6;
template <class T>
class safe {

private:
	//enum { LIMIT = 50 }; /////noooooooo
	int n;
	//T arr[LIMIT];
	T* arr;
public:

	safe();
	safe(int N);
	void sort();
	~safe();
	T& operator [](int i);

};






#endif

