#ifndef _Client_h_
#define _Client_h_
#include "Compte.h"

using namespace std;


class Client { 

	private:
		string nom ;
		Compte* compte[100];
		int nbComptes ;
	public:
		Client(string nom);
		string getNom();
		void ajouterCompte();
		void soldeAll();

};



#endif