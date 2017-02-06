#include <iostream>
#include "Client.h"
#include <string>

using namespace std;

Client::Client(string name){
	nom = name ;
	nbComptes = 0 ;
}
string Client::getNom(){
	return nom;
}
void Client::ajouterCompte(){
	compte[nbComptes] = new Compte();
	cout << " Vous avez cree un nouveau compte ..."<<endl;
	nbComptes++;
}
void Client::soldeAll(){
	float all = 0;
	for (int i = 0; i < nbComptes; i++)
	{
		all += compte[i]->getSolde();
	}
	cout << " Le solde de tous vos comptes est de : "<<all<<endl;
}


