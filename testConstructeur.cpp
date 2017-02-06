#include <iostream>
#include <cstdlib> // pour la fonction rand

using namespace std ;

class hasard {
 int val[10] ;
public : 
hasard (int) ;
~hasard () ;
void affiche () ;
 } ;

hasard::hasard (int max)
// constructeur : il tire 10 valeurs au hasard
// rappel : rand fournit un entier entre 0 et RAND_MAX
{ int i ; 
	for (i=0 ; i<10 ; i++) 
	val[i]=double(rand())/RAND_MAX * max ; 
}
void hasard::affiche () // pour afficher les 10 valeurs
{ int i ;
for (i=0 ; i<10 ; i++) {
	cout << val[i] << "\t " ;
     
       }
       cout << "\n" ;
     }
hasard::~hasard (){
	cout <<"destruction de lobjet \n";
}
main(){
 hasard suite1 (5) ; suite1.affiche () ;
 hasard suite2 (12) ; suite2.affiche () ; 
}