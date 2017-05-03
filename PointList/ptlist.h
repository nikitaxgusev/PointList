#pragma once
#include <iostream>

const int maxListSize = 9;

class Point
{
public:
	float x;
	float y;
	Point(float x0 = 0, float y0 = 0)
	{
		x = x0;
		y = y0;
	}
};


class PointList
{
//private:
public:
	//Data members
	
public:
	int size;
	int cursor;
	Point points[maxListSize];
	PointList();
	//List Manipalution operations 
	void append(Point newPoint);
	void clear();

	//List status  operations 
	bool isEmpty() const;
	bool isFull() const;

	//List iteration operations
	void gotoBeginning();		// Go to beginning
	void gotoEnd();			    // Go to end
	bool gotoNext();			// Go to next point
	bool gotoPrior();		    // Go to prior point
	Point getCursor() const;    //Return point

	void showStructure();
	~PointList() {};
};

