#ifndef _Triangle_h_
#define _Triangle_h_



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
	void SetA(Point pt);
	void SetB(Point pt);
	void SetC(Point pt);
	float Perimetre();
	void Translation(point pt);
	float Aire();



	void Distance(Point pt);
};



#endif