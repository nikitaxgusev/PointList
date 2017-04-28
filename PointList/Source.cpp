#include <iostream>
#include "ptlist.h"


int main()
{
	PointList polygon;
	Point vertex;

	//Read in the polygon's vertices

	std::cout << "Enter the polygon's vertices (end with eof): ";
	while (!polygon.isFull())
	{
		std::cin >> vertex.x >> vertex.y;
		polygon.append(vertex);
	}
	//Output the vertices one per line 

	polygon.showStructure();
	/*if(!polygon.isEmpty())
	{
		polygon.gotoBeginning(); //Go to beginning
		do
		{
			vertex = polygon.getCursor();
			std::cout << "(" << vertex.x << "." << vertex.y << ")" << std::endl;
		} while (polygon.gotoNext()); //Go to next point
	}*/

	system("pause");

	return 0;
}