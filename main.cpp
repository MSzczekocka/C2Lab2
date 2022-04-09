#include <iostream>
#include "simple_simulation.h"
#include "Vector2D.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Polish");
	Simulation *sim = new SimpleSimulation;

    Vector2D v1 = Vector2D(2.5, 4);
    Vector2D v2 = Vector2D(8);
    Vector2D v3 = Vector2D();

    v1.Show();
    v2.Show();
    v3.Show();

    -v1;
    v1.Show();
    -v1;

    Vector2D v4 = v1 - v2;
    v4.Show();

    v4 += v1;
    v4.Show();

    Vector2D v5 = v1 * 5;
    v5.Show();

    std::cout << "v5 length: " << v5.vLength() << std::endl;

    Vector2D v6 = v1.normalize();
    cout << "v6 length: " << v6.vLength() << std::endl;

    std::cout << v1.dist(v2) << std::endl;

    Lion lion1 = Lion(Vector2D(7,4),Vector2D(8,8),11);
    lion1.Show();
    Lion lion2 = Lion(Vector2D(11,3),Vector2D(1,7));
    lion2.Show();

    Gnu* gnu1 = new Gnu(Vector2D(3, 1), Vector2D(4, 4), 1);
    gnu1->Show();
    Gnu gnu2 = Gnu(Vector2D(2,7),Vector2D(1,4));
    gnu2.Show();

    Hyena hyena1 = Hyena(Vector2D(7,3),Vector2D(11,11),155);
    hyena1.Hyena::Show();
    Hyena hyena2 = Hyena(Vector2D(2,1),Vector2D(4,5));
    hyena2.Show();

//	sim->Go();
    delete gnu1;
	delete sim;
	return 0;
}