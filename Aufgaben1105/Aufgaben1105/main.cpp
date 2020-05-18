#include"Vehicle.h"
#include "Person.h"
#include <string>
#include "Position.h"
#include "Proclaimer.h"

using namespace std;
int main()
{
	Pos Auto_pos{ 0,0 };
	Person Dieter("Dieter", de);
	Person Gisela("Gisela", it);
	Dieter.greet(Gisela);
	Vehicle Auto("Passat", Auto_pos, 150, 5, "blau");
	Auto.enter(Dieter);
	Proclaimer foo;
	Proclaimer foo1;
	Proclaimer foo2(foo);
	foo = foo1;	
}