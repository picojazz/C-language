#include <iostream>
#include <math.h>
#include "exo3Point.h"
#include "exo3Triangle.h"


void Triangle::Afficher(){
	cout<< " A : " << A.Afficher() << " , B : " << B.Afficher() << " C : " << C.Afficher() ;
}

Triangle::Triangle(Point pt1 , Point pt2 , Point pt3 ){
	A.SetA(pt1.GetX()); A.SetY(pt1.GetY());
	B.SetA(pt2.GetX()); B.SetY(pt2.GetY());
	C.SetA(pt3.GetX()); C.SetY(pt3.GetY());
}

double Triangle::GetA(){ return A.Afficher(); }

double Triangle::GetB(){ return B.Afficher(); }

double Triangle::GetC(){ return C.Afficher(); }

void Triangle::SetA(Point pt ){ A.SetX(pt.GetX()); A.SetY(pt.GetY()); }

void Triangle::SetB(Point pt ){ B.SetX(pt.GetX()); B.SetY(pt.GetY()); }

void Triangle::SetC(Point pt ){ C.SetX(pt.GetX()); C.SetY(pt.GetY()); }