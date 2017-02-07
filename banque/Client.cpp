#include <iostream>
#include "Client.h"
#include "Banque.h"
#include <string>

using namespace std;

Client::Client(string name){
	nom = name ;
	nbComptes = 0 ;
	num = Banque::nbClients ;
}
string Client::getNom(){
	return nom;
}
void Client::ajouterCompte(){
	compte[nbComptes] = new Compte();
	cout << " Vous avez cree un nouveau compte N : "<<compte[nbComptes]->getNumero()<<endl;
	nbComptes++;
}
void Client::soldeAll(){
	float all = 0;
	for (int i = 0; i < nbComptes; i++)
	{
		all += compte[i]->getSolde();
		compte[i]->afficheSolde();
	}
	cout << " Le solde de tous vos comptes est de : "<<all<<endl;
}
int Client::getNum(){
	return num;
}
void Client::pontRetrait(int num , float somm){
	int p = -1 ;
	for (int i = 0; i < nbComptes; i++)
	{
		if (num == compte[i]->getNumero())
		{
			p = i ;
		}
	}
	if (p == -1)
	{
		cout << " Ce Compte n existe pas ... "<<endl;
	}else{
		compte[p]->retrait(somm);
	}
}
void Client::pontDepot(int num , float somm){
	int p = -1 ;
	for (int i = 0; i < nbComptes; i++)
	{
		if (num == compte[i]->getNumero())
		{
			p = i ;
		}
	}
	if (p == -1)
	{
		cout << " Ce Compte n existe pas ... "<<endl;
	}else{
		compte[p]->depot(somm);
	}
}

