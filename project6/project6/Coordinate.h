#ifndef COORDINATE_H
#define COORDINATE_H
#include<iostream>
#pragma once
using namespace std;

class Coordinate
{
	friend Coordinate operator+(const Coordinate &c1, const Coordinate &c2);
	friend ostream &operator<<(ostream &out, const Coordinate &coor);
public:
	Coordinate(int x,int y);
	/*Coordinate operator+(const Coordinate &coor);*/

	int operator[](int index);

	int getX();
	int getY();
private:
    int	m_iX;
	int  m_iY;
};


#endif