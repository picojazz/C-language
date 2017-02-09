#ifndef _Banque_h_
#define _Banque_h_
#include "Client.h"

using namespace std;


class Banque { 

	private:
		Client* client[1000];
		static int nbClients ;
	public:
		static int getNbClients();
		Banque();
		void ajouterClient(string name);
		void bilanClient(int);
		void afficherBilan();
		void interaction();
		void interactionAjoutClient();
		void interactionOperationClient();
		void operationClient(int);
		Client* getClient(string nom);
};



#endif