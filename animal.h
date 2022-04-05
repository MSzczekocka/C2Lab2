#pragma once
#include "safari.h"
#include <iostream>
class Animal
{
public:
	void Show()
	{
		std::cout << "metoda Show klasy Animal\n";
	}
	

	void Do(Safari& safari)
	{
		std::cout << "metoda Do klasy Animal\n";
	}



};
