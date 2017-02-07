#ifndef _Compte_h_
#define _Compte_h_

class Compte {

	private:
		int numero;
		float solde;
	 
	public:
		Compte();
		void depot(float);
		void retrait(float);
		float getSolde();
		void afficheSolde();
		void virer(float,Compte*);
		int getNumero();

};



#endif