#pragma once
#include<iostream>

using namespace std;

class Time
{
	int hour;
	int minute;
	int second;

public:
	Time();
	Time(int hour, int minute, int second);
	~Time();

	friend ostream& operator<<(ostream& out, const Time& time);
	friend istream& operator>>(istream& in, Time& time);

	int& operator[](int index);
	void operator()();
};
