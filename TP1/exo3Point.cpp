#include <iostream>
#include <math.h>
#include "exo3Point.h"

using namespace std;

Point::Point(double x, double y){
	X=x;
	Y=y;
}

Point Point::Add(Point pt){
	Point result(pt.X + X, pt.Y + Y);
	return result;
}

void Point::Afficher(){
	cout<< "(" << X << " ," << Y << " )";
}

double Point::GetX(){ return X; }

double Point::GetY(){ return Y; }

void Point::SetX(double x){ X = x; }

void Point::SetY(double y){ Y = y; }

void Point::Distance(Point pt){
	float v;
	v = sqrt(((pt.X-X)*(pt.X-X))+((pt.Y-Y)*(pt.Y-Y)));
	cout << " " << v ;
}

// Triangle

void Triangle::Afficher(){
	cout<< "(" << X << " ," << Y << " )";
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