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



#endif