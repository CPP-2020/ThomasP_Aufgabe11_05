#include "Proclaimer.h"
#include <iostream>
Proclaimer::Proclaimer()
{
	std::cout << "Der Standardkonstruktor wurde aufgerufen"<<std::endl;
}
Proclaimer::Proclaimer(const Proclaimer & other)
{
	std::cout << "Der Copy Konstruktor wurde aufgerufen."<<std::endl;
}

Proclaimer& Proclaimer :: operator= (const Proclaimer & other)
{
	std::cout << "Der Operator '=' wurde ueberladen."<<std::endl;
	return *this;
}

Proclaimer::~Proclaimer()
{
	std::cout << "Das Objekt wurde zerstoert"<<std::endl;
}