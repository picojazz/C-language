#include <iostream>
#include "Compte.h"
#include "Client.h"
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	Client* cl1 = new Client("amadou");
	cl1->ajouterCompte();
	cl1->ajouterCompte();
	cl1->getNom();
	cl1->soldeAll();
	return 0;
}
