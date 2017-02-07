#ifndef _Banque_h_
#define _Banque_h_
#include "Client.h"

using namespace std;


class Banque { 

	private:
		Client* client[1000];
	public:
		static int nbClients ;
		Banque();
		void ajouterClient(string name);
		void bilanClient(int);
		void afficherBilan();
		void interaction();
		void interactionAjoutClient();
		void interactionOperationClient();
		void operationClient(int);
};



#endif