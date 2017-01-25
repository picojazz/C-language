#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	int a,b,c,m=1;
	int x0,x1,x2,delta;
	
	
	do{
		cout << "-------- equation second degre ---------" << endl;
		cout <<"------- aX² + bX + c = 0 --------" << endl;
	cout << " a : " ;
	cin >> a ;
	cout << " b : " ;
	cin >> b ;
	cout << " c : " ;
	cin >> c ;

	if(a ==0){
		cout << " -------------- Solution ----------" << endl;
		cout << "x0 = " << -c/b <<endl;
	}else{
	delta = (b*b) - (4 * a * c) ;
	cout << delta;
	if (delta < 0)
	{
		
		cout << "PAS DE SOLUTION DANS R" << endl;
	}else if (delta == 0)
	{
		cout << " -------------- Solution ----------" << endl;
		cout <<" x1 = x2 = x0 = " << (-b)/2*a << endl;
		
	}else{
		cout << " -------------- Solution ----------" << endl;
		cout <<" x1 = " << (-b-sqrt(delta))/2*a << endl;
		cout <<" x2 = " << (-b-sqrt(delta))/2*a << endl;

	}
}	
	
	cout << " appuyer sur une touche pour continuer " ;
	getch();
	
    system("cls");

    }while(m == 1);
	return 0;
}