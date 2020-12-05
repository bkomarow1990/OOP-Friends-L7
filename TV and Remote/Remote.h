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
	{
		this->tv = tv;
	}
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
		if (channel<=tv->maxChannel && channel>=0)
		{
			this->tv->current_channel = channel;
		}
		return;
	}
private:
	TV* tv;
};

