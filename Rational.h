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

	Rational(double, double, double, double);
	double getSumma();
	void setSumma(double);
	double getDelenie();
	void setDelenie(double);
	double getMinus();
	void setMinus(double);
	double getUmnosh();
	void setUmnosh(double);

private:
	double Chislitel;
	double Znamenatel;
	double Zmamenatel;
	double Summa;
	double Delenie;
	double Minus;
	double Umnosh;

};
