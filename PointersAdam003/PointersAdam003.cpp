// PointersAdam003.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
using namespace std;


int main()
{
	int x = 5;
	int* y = &x;
	int** z = &y;
	int*** p = &z;

	std::cout << x << " Sima<<--es-->>címe " << &x << endl;
	cout << y << " Sima <<--y csillag -->> " << *y<< endl;
	cout << z << " Sima <<--z csillag-- >> " << *z  <<" ketcsillag z " << **z << endl;
	cout << p << " Sima <<--p csillag-- >> " << *p << " ketcsillag p " << **p << " Harom p " << ***p << endl;
	

	cout << *y << " es x : " << x;
	cin.get();
    return 0;
}

