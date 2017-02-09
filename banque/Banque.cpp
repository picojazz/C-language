#include <iostream>
#include "Banque.h"
#include "Client.h"
#include <cstdlib>

using namespace std;
 int Banque::nbClients(1);

Banque::Banque(){
	
	
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
		cout << "======= Client : "<<client[p]->getNom()<<" ======="<<endl;
		client[p]->soldeAll();
	}
}
void Banque::afficherBilan(){

	if (nbClients == 1)
	{
		cout <<" La banque ne contient aucun client pour l'instant ..."<<endl;
	}else{
		cout << " \tBilan general" <<endl;
		cout << " \t-------------" <<endl;

	for (int i = 1; i < nbClients; ++i)
	{
		bilanClient(client[i]->getNum());
	}
		}

	
}
void Banque::interactionAjoutClient(){
	cout << " \tAjout d un client" <<endl;
	cout << " \t-----------------" <<endl;
	cout << " Entrez le nom du client" <<endl;
	string nom ;
	cin.ignore();
	getline(cin,nom);
	ajouterClient(nom);
}
void Banque::interactionOperationClient(){
	

	if (nbClients == 1)
	{

		cout <<" La banque ne contient aucun client pour l'instant ..."<<endl;
	}else{
		cout << " \tListe des clients" <<endl;
		cout << " \t-----------------" <<endl;
			for (int i = 1; i < nbClients; i++)
	{
			cout <<i<<") " <<client[i]->getNom()<<endl;
		
	}
	cout << " Veuillez choisir un client" <<endl;
	int numClient;
	cin >> numClient;
	int p = -1;
	for (int i = 0; i < nbClients; i++)
	{
		if (numClient == i)
		{	
			p=1;
		}
	}
	if (p == -1 || numClient <=0)
	{
		cout <<" Ce client n existe pas.."<<endl;
		
		
	}else{
	operationClient(numClient);
	}
		}

}
void Banque::operationClient(int num){
		
	int m = 0;
		do{
			system("cls");
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
		case 1 :system("cls"); client[num]->ajouterCompte(); system("pause");
			break; 
		case 2 :system("cls"); bilanClient(client[num]->getNum()); system("pause");
			break;	
		case 3 :system("cls"); cout << " ====== RETRAIT ======"<<endl;
				 cout << " Veuillez entrer le numero du compte que vous voulez utiliser"<<endl;
				 int n;
				 cin >> n;
				 cout << " Veuillez entrez la somme a retire "<<endl;
				 float som;
				 cin >> som;
				 client[num]->pontRetrait(n,som);
				 system("pause");
			break;
		case 4 :system("cls"); cout << " ====== DEPOT ======"<<endl;
				 cout << " Veuillez entrer le numero du compte que vous voulez utiliser"<<endl;
				 int n1;
				 cin >> n1;
				 cout << " Veuillez entrez la somme a depose "<<endl;
				 float som1;
				 cin >> som1;
				 client[num]->pontDepot(n1,som1); system("pause");
			break;
		case 5 :system("cls"); cout << " ====== VIREMENT ======"<<endl;
				 cout << " 1) Interne "<<endl;
				 cout << " 2) Externe (vers un autre client)"<<endl;
				 int c;
				 cin >> c;
				 switch(c){
				 	case 1 :system("cls");
				 			cout << " ====== VIREMENT INTERNE ======"<<endl;
				 			 cout << " Veuillez entrer le numero du compte que vous voulez utiliser"<<endl;
				             int n2;
				             cin >> n2;
				             cout << " Veuillez entrer le numero du compte destinataire"<<endl;
				             int n3;
				             cin >> n3;
				             cout <<" Veuillez entrez le montant a virer"<<endl;
				             float montant;
				             cin >> montant;
				             client[num]->pontVirement(n2,montant,n3); system("pause");
				 		break;
				 	case 2 :system("cls");
				 			 cout << " ====== VIREMENT EXTERNE ======"<<endl;
				 			 cout << " Veuillez entrer le numero du compte que vous voulez utiliser"<<endl;
				             int n4;
				             cin >> n4 ;
				             cout << " Veuillez entrez le nom du destinataire"<<endl;
				             string name;
				             cin.ignore();
				             getline(cin,name);
				             cout << " Veuillez entrez le numero de compte du destinataire"<<endl;
				             int n5;
				             cin >> n5;
				             cout <<" Veuillez entrez le montant a virer"<<endl;
				             float montant1;
				             cin >> montant1;
				             Client* c=getClient(name);
				             Compte* cpt = c->getCompte(n5);
				             if (name == c->getNom() && n5 == cpt->getNumero())
				             {
				             	
				             	client[num]->pontVirer(n4,cpt,montant1);
				             }else{
				             	cout <<"erreur ! le client ou le compte n existe pas"<<endl;
				             }
				             system("pause");
				             
				 		break;
				 }
			break;
		case 0 : m=1;
			break;
	}
		}while(m == 0);

	
}
Client* Banque::getClient(string nom){
	for (int i = 0; i < nbClients; i++)
	{
		if (nom == client[i]->getNom() )
		{
			return client[i];
		}
	}
	Client* cl = new Client("fausse");
	return cl;
}
void Banque::interaction(){
	int n = 0;
		do{
			system("cls");
	cout <<" \tBienvenue dans la Banque PICOJAZZ"<<endl;
	cout <<" \t---------------------------------"<<endl;
	cout <<" \t          MENU GENERAL"<<endl;
	cout <<" \t          ------------"<<endl;
	cout <<" Quelle operation voulez-vous effectuer ?"<<endl;
	cout <<" 1) Ajouter un Client "<<endl;
	cout <<" 2) Effectuer une operation sur un client "<<endl;
	cout <<" 3) Afficher un bilan general de la Banque "<<endl;
	cout <<" 0) QUITTER"<<endl;
	int choix;
	cin >> choix;
	switch(choix){
		case 1 : system("cls"); interactionAjoutClient(); system("pause");
			break;
		case 2 : system("cls"); interactionOperationClient(); system("pause");
			break;
		case 3 : system("cls"); afficherBilan(); system("pause");
			break;
		case 0 : n = 1;
			break;
	}
	   }while(n == 0);
}
int Banque::getNbClients(){
	return nbClients;
}