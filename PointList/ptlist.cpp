#include "ptlist.h"
#include <GL/glew.h>
#include <GL/glut.h>

PointList::PointList()
{
	size = 0;
	cursor = 0;
	Point points[maxListSize] = { 0 };
}

void PointList::append(Point newPoint)
{
	if (size > maxListSize) 
	{
		std::cout << "The List is Full"<<std::endl;
		exit(-1);
	}
	else 
	{
		points[size++] = newPoint;
	}
	
}

void PointList::clear()
{
	size = 0;
	cursor = 0;
	Point points[maxListSize] = { 0 };
}

bool PointList::isEmpty() const
{
	if (size <= 0)
		return true;
	else
		return false;
}

bool PointList::isFull() const
{
	if (size == maxListSize)
		return true;
	else
	return false;
}

void PointList::gotoBeginning()
{
	cursor = 0;

}

void PointList::gotoEnd()
{
	cursor = size;
}

bool PointList::gotoNext()
{
	if (cursor < size)
	{
		cursor++;
		return true;
	}
	return false;
}

bool PointList::gotoPrior()
{
	if (!isEmpty() && cursor != 1)
	{
		cursor--;
		return true;
	}
	else return false;
}

Point PointList::getCursor() const
{
	if (!isEmpty())
	{
		return points[cursor];
	}
	else
	{
		std::cout <<"Empty list"<< std::endl;
	}
}

void PointList::showStructure()
{
			if (!isEmpty())
			{
				for (int i = 0; i < 4; i++)
				{
					std::cout << "Point 1: ";
					std::cin >> points[i].x;
					std::cout << "Point 1: ";
					std::cin >> points[i].y;
				}
			}
			else
			{
				std::cout << "Empty list" << std::endl;
			}

}
