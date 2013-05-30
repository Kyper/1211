// 1211.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "join.h"
#include "Rational.h"



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, "Russian");
	Rational myRational;
	double t,m,n;

	cout<<"Введите Числитель: ";
	cin>>t;
	cout<<endl;

	cout<<"Введите знаменатель 1: ";
	cin>>m;
	cout<<endl;

	cout<<"Введите знаменатель 2: ";
	cin>>n;
	cout<<endl;

	myRational.setChislitel(t);
	myRational.setZnamenatel(m);
	myRational.setZmamenatel(n);

	myRational.setSumma(t+m);
	myRational.setDelenie(t/m);
	myRational.setMinus(t-m);
	myRational.setUmnosh(t*m);

	myRational.displayMessage();
	cout<<endl;
	_getch();
	return 0;
}

