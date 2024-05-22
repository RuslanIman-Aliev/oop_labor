#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Vector
{
private:
	vector<int> elements;

public:
   
    Vector() {}

    int& operator()(int index);
    int operator[](int n);

    void operator-(int n);
    void operator+(int n);
};

