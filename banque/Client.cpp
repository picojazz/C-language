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
	cout << " Le solde de tous les comptes est de : "<<all<<endl;
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
void Client::pontVirement(int source,float som,int desti){
	int p = -1 ;
	int p2 = -1 ;
	for (int i = 0; i < nbComptes; i++)
	{
		if (source == compte[i]->getNumero())
		{
			p = i ;
		}
	}
	for (int i = 0; i < nbComptes; i++)
	{
		if (desti == compte[i]->getNumero())
		{
			p2 = i ;
		}
	}
	if (p == -1 || p2 == -1)
	{
		cout << " erreur ! l'un ou les deux compte n'existe pas... "<<endl;
	}else{
		compte[p]->virer(som,compte[p2]);
	}

}
Compte* Client::getCompte(int num){
	for (int i = 0; i < nbComptes; i++)
	{
		if (num == compte[i]->getNumero())
		{
			return compte[i];
		}
	}
	Compte* c = new Compte();
	return c;
}
void Client::pontVirer(int sour,Compte* dest ,float som){
	int p = -1 ;
	for (int i = 0; i < nbComptes; i++)
	{
		if (sour == compte[i]->getNumero())
		{
			p = i ;
		}
	}
	if (p == -1 )
	{
		cout << " erreur ! l'un ou les deux compte n'existe pas... "<<endl;
	}else{
		compte[p]->virer(som,dest);
	}

}