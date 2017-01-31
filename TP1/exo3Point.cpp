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

