#pragma once
using namespace std;
class Coordinate
{
public:
	Coordinate(int x,int y);
	~Coordinate();
	int getX() const;
	int getY() const;
	void setX(int x) ;
	void setY(int y);
private:
	int m_iX;
	int m_iY;

};