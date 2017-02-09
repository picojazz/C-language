#include <iostream>
#include "Compte.h"
#include "Client.h"
#include "Banque.h"
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	Banque* b= new Banque();
	b->interaction();
	
	

	return 0;
}
