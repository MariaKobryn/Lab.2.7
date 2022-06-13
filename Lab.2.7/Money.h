#pragma once
#include <iostream>
#include <string>

using namespace std;
class Money
{
	long UAH, UAH2, lungs, multiplicationn;
	double kopec, kopec1, lungs1, multiplicationn1;
public:

	long getUAH() const { return UAH; }
	long getUAH2() const { return UAH2; }
	long getLungs() const { return lungs; }
	long getMultiplicationn() const { return multiplicationn; }
	double getKopec() const { return kopec; }
	double getKopec1() const { return kopec1; }
	double getLungs1() const { return lungs1; }
	double getMultiplicationn1() const { return multiplicationn1; }

	void setUAH(long value) { UAH = value; }
	void setUAH2(long value) { UAH2 = value; }
	void setLungs(long value) { lungs = value; }
	void setMultiplicationn(long value) { multiplicationn = value; }
	void setKopec(double value) { kopec = value; }
	void setKopec1(double value) { kopec1 = value; }
	void setLungs1(double value) { lungs1 = value; }
	void setMultiplicationn1(double value) { multiplicationn1 = value; }

	Money();
	Money(long, long, long, long, double, double, double, double);
	Money(const Money&);

	void Init(long, long, long, long);
	void Init1(double, double, double, double);

	void Read();
	void Display();

	long addition();
	long subtraction();
	long divisionofsums();
	long lungss();
	long multiplication();

	double addition1();
	double subtraction1();
	double divisionofsums3();
	double lungss3();
	double multiplication3();

	void Ñomparison();

	operator string() const;

	friend ostream& operator <<(ostream&, const Money&);
	friend istream& operator >>(istream&, Money&);
};
