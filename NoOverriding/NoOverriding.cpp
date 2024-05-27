// NoOverriding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() {
		cout << "halo saya function dari base class";
	}
};

class derivedclass :public baseclass {
public:
	void perkenalan() {
		cout << "halo saya function dari derived class";
	}
};


