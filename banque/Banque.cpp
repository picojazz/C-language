#include <iostream>
#include "Banque.h"
#include "Client.h"

using namespace std;
 int Banque::nbClients(1);

Banque::Banque(){
	cout << " Bienvenue Dans PICOJAZZ Bank" <<endl;
	
}
void Banque::ajouterClient(string name){
	client[nbClients] = new Client(name);
	nbClients++ ;
	cout <<" Le client "<<name<<" a ete cree ..."<<endl;
}
void Banque::bilanClient(int numero){
	int p=-1;
	for (int i = 1; i < nbClients; i++)
	{
		if (client[i]->getNum() == numero)
		{
			p = i;
		}
	}
	if (p == -1)
	{
		cout << " Ce client n existe pas ... "<<endl;
	}else{
		cout << " Client : "<<client[p]->getNom()<<endl;
		client[p]->soldeAll();
	}
}
void Banque::afficherBilan(){
	for (int i = 1; i < nbClients; ++i)
	{
		bilanClient(client[i]->getNum());
	}
}
void Banque::interactionAjoutClient(){
	cout << " Entrez le nom du client" <<endl;
	string nom;
	getline(cin,nom);
	ajouterClient(nom);
}
void Banque::interactionOperationClient(){
	for (int i = 1; i < nbClients; i++)
	{
		cout <<i<<") " <<client[i]->getNom()<<endl;
	}
	int numClient;
	cin >> numClient;

}