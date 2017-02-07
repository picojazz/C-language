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
	cout <<" Le client "<<name<<" a ete cree et a pour code client "<<client[nbClients]->getNum()<<endl;
	client[nbClients]->ajouterCompte();
	nbClients++ ;
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
	string nom ;
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
	operationClient(numClient);

}
void Banque::operationClient(int num){
	int m = 0;
		do{
	cout << " Quelle operations voullez-vous effectuer sur le client "<<client[num]->getNom()<<" ?"<<endl;
	cout << " 1) Ouvrir un nouveau Compte"<<endl;
	cout << " 2) Afficher un bilan"<<endl;
	cout << " 3) Faire un retrait"<<endl;
	cout << " 4) Faire un depot"<<endl;
	cout << " 5) Faire un virement"<<endl;
	cout << " 0) RETOUR"<<endl;
	int choix;
	cin >> choix ;
	switch(choix){
		case 1 : client[num]->ajouterCompte();
			break;
		case 2 : client[num]->soldeAll();
			break;	
		case 3 : cout << " ====== RETRAIT ======"<<endl;
				 cout << " Veuillez entrer le numero du compte que vous voulez utiliser"<<endl;
				 int n;
				 cin >> n;
				 cout << " Veuillez entrez la somme a retire "<<endl;
				 float som;
				 cin >> som;
				 client[num]->pontRetrait(n,som);
			break;
		case 4 : cout << " ====== DEPOT ======"<<endl;
				 cout << " Veuillez entrer le numero du compte que vous voulez utiliser"<<endl;
				 int n1;
				 cin >> n1;
				 cout << " Veuillez entrez la somme a depose "<<endl;
				 float som1;
				 cin >> som1;
				 client[num]->pontDepot(n1,som1);
			break;
		case 5 :
			break;
		case 0 :
			break;
	}
		}while(m == 0);

	
}