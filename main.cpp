#include <iostream>
#include "simple_simulation.h"
#include "Vector2D.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Polish");
	Simulation *sim = new SimpleSimulation;
    Point p1 = Point(3,4);
    Point p2 = Point(8,14);
    std::cout << "x: " << p1.x << " y: " << p1.y << std::endl;
    Vector2D v1 = Vector2D(p1, p2);






//	sim->Go();
	delete sim;
	return 0;
}