//Vector.cpp
#include"Vector.h"
#include<iostream>
#include<math.h>

using namespace std;

double Vector::distance(){
	return sqrt(pow((start.x-end.x),2)+pow((start.y-end.y),2));
}
void Vector::print(){
	cout<<"...";
	cout<<"   ";
	cout<<"...";
	cout<<"...";
}
