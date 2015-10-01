//vector.h
class Point{
public:
	double x,y;
};
class Vector{
public:
	Point start,end;
	double distance();
	void print();
};
