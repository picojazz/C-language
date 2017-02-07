#ifndef _Client_h_
#define _Client_h_
#include "Compte.h"

using namespace std;


class Client { 

	private:
		string nom ;
		int num;
		Compte* compte[100];
		int nbComptes ;
	public:
		Client(string nom);
		string getNom();
		void ajouterCompte();
		void soldeAll();
		int getNum();
		void pontRetrait(int,float);
		void pontDepot(int,float);
		void pontVirement(int,float,int);
		Compte* getCompte(int);
		void pontVirer(int,Compte*,float);

};



#endif