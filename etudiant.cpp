#include <iostream>
#include <cstdlib> // pour la fonction rand

using namespace std ;

class hasard {
private:
	char* nom;
	char* prenom;
	char* nationalite;
	int niveau;
public:
	static int nbInscrit;
	etudiant(char* nom,char* prenom,char* nationalite,int niveau);
	void afficherEtudiant();
	void nombredinscrit();

 
 } ;

 etudiant::etudiant(char* nom,char* prenom,char* nationalite,int niveau){
 	this.nom = nom;
 	this.prenom = prenom;
 	this.nationalite = nationalite;
 	this.nom = nom;

 }


main(){
 
}