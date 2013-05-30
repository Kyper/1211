#include "stdafx.h"
#include "join.h"
#include "Rational.h"


    Rational::Rational()
	{
	}
	void Rational::displayMessage()
	{
		cout<<"Числитель: "<<getChislitel()<<endl;
		cout<<"Знаменатель 1: "<<getZnamenatel()<<endl;
		cout<<"Знаменатель 2: "<<getZmamenatel()<<endl;
		
		cout<<endl;
		
		cout<<"Cумма: "<<getSumma()<<endl;
		cout<<"Деление: "<<getDelenie()<<endl;
		cout<<"Минус: "<<getMinus()<<endl;
		cout<<"Умножение: "<<getUmnosh()<<endl;
		
		cout<<endl;
		
		cout<<"В виде дроби: "<<getChislitel()<<"/"<<getZnamenatel();
	}
	Rational::Rational(double chis, double znam, double zmam)
	{
		setChislitel(chis);
		setZnamenatel(znam);
		setZmamenatel(zmam);
	}
	/*------------Действия---------*/
	Rational::Rational(double sum, double del, double min, double um)
	{
		setSumma(sum);
		setDelenie(del);
		setMinus(min);
		setUmnosh(um);
	}
	void Rational::setSumma(double sum)
	{
		Summa=sum;
	}
	double Rational::getSumma()
	{
		return Summa;
	}
	void Rational::setDelenie(double del)
	{
		Delenie=del;
	}
	double Rational::getDelenie()
	{
		return Delenie;
	}
	void Rational::setMinus(double min)
	{
		Minus=min;
	}
	double Rational::getMinus()
	{
		return Minus;
	}
	void Rational::setUmnosh(double um)
	{
		Umnosh=um;
	}
	double Rational::getUmnosh()
	{
		return Umnosh;
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
