#include <iostream>
#include "Compte.h"
using namespace std;

int main(int argc, char const *argv[])
{
	Compte* c1 = new Compte();
	Compte* c2 = new Compte();
	c1->depot(2500);
	c1->afficheSolde();
	c1->virer(500,c2);
	c1->afficheSolde();
	c2->afficheSolde();

	return 0;
}
