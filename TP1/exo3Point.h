#ifndef _Point_h_
#define _Point_h_

class Point{
private:
	double X;
	double Y;
public:
	Point(double x = 0, double y = 0);
	Point Add(Point pt);
	void Afficher();
	double GetX();
	double GetY();
	void SetX(double x);
	void SetY(double y);
	void Distance(Point pt);
};

class Triangle{
private:
	Point A;
	Point B;
	Point C;
public:
	Triangle(Point pt1 , Point pt2 , Point pt3 );
	void Afficher();
	double GetA();
	double GetB();
	double GetC();
	void SetA(Point a);
	void SetB(Point b);
	void SetC(Point c);
	float Perimetre();
	void Translation(point pt);
	float Aire();



	void Distance(Point pt);
};



#endif