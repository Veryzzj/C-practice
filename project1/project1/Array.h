#pragma once
using namespace std;

class Array
{
public:
	Array(int len);
	~Array();
	Array* setLen(int len);
	int getLen();
	Array* printInfo();
private:
	int len;
};