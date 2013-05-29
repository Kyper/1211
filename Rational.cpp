#include "stdafx.h"
#include "join.h"
#include "Rational.h"


    Rational::Rational(){}
  void Rational::displayMessage()
	{
		cout<<"Числитель: "<<getChislitel()<<endl;
		cout<<"Знаменатель 1: "<<getZnamenatel()<<endl;
		cout<<"Знаменатель 2: "<<getZmamenatel()<<endl;

	}
	Rational::Rational(double chis, double znam, double zmam)
	{
		setChislitel(chis);
		setZnamenatel(znam);
		setZmamenatel(zmam);
	}
	/*----------Chislitel----------*/
	void Rational::setChislitel(double chis)
	{
		Chislitel=chis;
	}
	double Rational::getChislitel()
	{
		return Chislitel;
	}
	/*------------Znamenatel--------*/
	void Rational::setZnamenatel(double znam)
	{
		Znamenatel=znam;
	}
	double Rational::getZnamenatel()
	{
		return Znamenatel;
	}
	/*----------Zmamenatel----------*/
	void Rational::setZmamenatel(double zmam)
	{
		Zmamenatel=zmam;
	}
	double Rational::getZmamenatel()
	{
		return Zmamenatel;
	}
