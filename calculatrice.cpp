#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int nb1,nb2,m=1;
	char symbol;
	
	do{
	cout << "nombre 1 " << endl;
	cin >> nb1 ;
	cout << "nombre 2 " << endl;
	cin >> nb2 ;
	cout << "symbole : " ;
	cin >> symbol ;
	switch(symbol){
		case '+' : cout <<" somme : "<< nb1+nb2 << endl;
			break;
		case '-' : cout <<" difference : "<< nb1-nb2 << endl;
			break;
		case '*' : cout <<" produit : "<< nb1*nb2 << endl;
			break;
		case '/' : cout <<" quotient : "<< nb1/nb2 << endl;
			break;
		default : cout <<"entrez un sumbole valide " << endl;
	}
	getch();
	
    system("cls");

    }while(m == 1);
	return 0;
}