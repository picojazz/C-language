#include <iostream>
#include "Compte.h"
#include <cstdlib>

using namespace std;

Compte::Compte(){
	solde = 1000; 
	numero = rand() % 100000 ;
}
void Compte::depot(float somme){
	solde += somme ;
	cout <<" Le depot de "<<somme<<" a ete enregistrer ..."<<endl;
}
void Compte::retrait(float somme){
	if (somme <= solde)
	{
		solde -= somme ;
		cout <<" Le retrait de "<<somme<<" a ete enregistrer ..."<<endl;
	}else{
		cout <<" Votre solde est inferieur a la somme demander ..."<<endl;
	}
}
float Compte::getSolde(){
	return solde;
}
void Compte::afficheSolde(){
	cout << " Compte N : "<<numero<<endl;
	cout <<" Le solde est de : "<<solde<<endl;
}
void Compte::virer(float somme , Compte *cpt){
	if (somme <= solde)
	{
		cpt->depot(somme) ;
		solde -= somme ;
		cout << " Donc le virement a eu lieu avec success !"<<endl;
	}else{
		cout << " Vous n'avez pas assez pour faire ce virement"<<endl;
	}
}
int Compte::getNumero(){
	return numero;
}
