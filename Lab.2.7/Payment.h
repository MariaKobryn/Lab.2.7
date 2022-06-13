#pragma once
#include <iostream>
#include <string>

using namespace std;

class Payment
{
	double rate, experience, ³nterest, spent, income;
public:

	double getRate() const { return rate; }
	double getExperience() const { return experience; }
	double getInterest() const { return ³nterest; }
	double getSpent() const { return spent; }
	double getIncome() const { return income; }

	void setRate(double value) { rate = value; }
	void setExperience(double value) { experience = value; }
	void setInterest(double value) { ³nterest = value; }
	void setSpent(double value) { spent = value; }
	void setIncome(double value) { income = value; }

	Payment();
	Payment(double, double, double, double, double);
	Payment(const Payment&);

	operator string() const;

	friend ostream& operator << (ostream&, const Payment&);
	friend istream& operator >> (istream&, Payment&);

	void Init(double, double, double, double, double);
	void Read();
	void Display();
	double accrued();
	double ³nterestt();
	double incomee();
	double salary();
};
