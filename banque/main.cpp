#include <iostream>
#include "Compte.h"
#include "Client.h"
#include "Banque.h"
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	Banque* b= new Banque();
	b->interactionAjoutClient();
	b->interactionOperationClient();
	

	return 0;
}
