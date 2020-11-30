#pragma once
#include <iostream>
#include "TV.h"
using namespace std;
class Remote
{
public:
	void power() {
		if (tv->state)
		{
			tv->state = false;
		}
		else {
			tv->state = true;
		}
	}
	Remote(TV* tv)
		:tv(tv)
	{}
	~Remote() {}
	Remote() = default;
	void setNewTV(TV* tv) {
		this->tv = tv;
	}
	Remote& operator++() {
		tv->nextChanenel();
		return *this;
	}
	Remote& operator--() {
		tv->prevChannel();
		return *this;
	}
	void goToChannel(const int& channel) {
		//replace to if
		for (int i = 0; i != channel; i++)
		{
			tv->nextChanenel();
		}
	}
private:
	TV* tv;
};

