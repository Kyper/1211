#include "stdafx.h"
#include "join.h"

class Rational
{
public:
  Rational();
	
	Rational(double, double, double);
	void setChislitel(double);
	double getChislitel();
	void setZnamenatel(double);
	double getZnamenatel();
	void setZmamenatel(double);
	double getZmamenatel();
	void displayMessage();

private:
	double Chislitel;
	double Znamenatel;
	double Zmamenatel;
};
