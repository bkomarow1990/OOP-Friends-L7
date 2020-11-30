#pragma once
#include <iostream>
#include "Remote.h"
using namespace std;
class TV
{
	
public:
	TV(const int&maxCh,const int&maxVolume) 
		:maxChannel(maxCh),maxVolume(maxVolume)
	{}
	TV(const bool&state,const int& current_channel,const int& maxCh, const int& maxVolume,const int& current_volume)
		:maxChannel(maxCh), maxVolume(maxVolume), current_channel(current_channel),state(state),current_volume(current_volume)
	{}
	TV() = default;
	void power() {
		 (state ? state=false : state=true);
	}
	void print()const {
		cout << "Power: " <<state << endl;
		cout << "Current channel: " << current_channel << endl;
		cout << "Max Volume: " << maxVolume << endl;
		cout << "Max Channel: " << maxChannel << endl;
	}
	void nextChanenel() {
		if (state==true && current_channel+1==maxChannel+1)
		{
			current_channel == 0;
		}
		else if(state==true && current_channel<maxChannel)
		{
			current_channel++;
		}
	}
	void prevChannel() {
		if (state == true && current_channel-1==-1)
		{
			current_channel = maxChannel;
		}
		else if (state==true && current_channel>0)
		{
			current_channel--;
		}
	}
	void incVolume() {
		if (state == true && current_volume<maxVolume)
		{
			current_volume++;
		}
	}
	void degVolume() {
		if (state==true && current_volume>0)
		{
			current_volume--;
		}
	}
private:
	bool state = false; // false - off , true - on
	int current_channel = 0;
	int current_volume = 0;
	const int maxVolume = 100;
	const int maxChannel = 100;
	friend class Remote;

};

