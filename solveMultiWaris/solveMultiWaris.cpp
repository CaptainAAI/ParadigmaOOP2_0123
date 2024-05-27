#include<iostream>
using namespace std;

class orang {
public:
	int umur:

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "pekerja dibuat\n" << endl;
	}
};

class pekerja : public orang {
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "Pekerja dibuat\n" << endl;
	}
};


