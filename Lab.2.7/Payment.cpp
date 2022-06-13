#include "Payment.h"
#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <stdlib.h> 
#include <string>
#include <sstream>

using namespace std;

string surname;
string name;
string middlename;

Payment::Payment() { }

Payment::Payment(double x, double y, double z, double g, double l) {
	rate = x;
	experience = y;
	³nterest = z;
	spent = g;
	income = l;
}

Payment::Payment(const Payment& p) {
	*this = p;
}

Payment::operator string() const {
	stringstream ss;
	ss << rate << " " << experience << " " << ³nterest << " " << spent << " " << income << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Payment& p) {
	out << string(p);
	return out;
}

istream& operator >> (istream& in, Payment& p) {
	cout << "Rate : "; in >> p.rate;
	cout << "Experience : "; in >> p.experience;
	cout << "Interest : "; in >> p.³nterest;
	cout << "Spent : "; in >> p.spent;
	cout << "Income : "; in >> p.income;

	return in;
}

void Payment::Init(double x, double y, double z, double g, double l) {
	rate = x;
	experience = y;
	³nterest = z;
	spent = g;
	income = l;
}

void Payment::Read() {
	double x, y, z, g, l;

	cout << " Ïð³çâèùå = "; cin >> surname;
	cout << " ²ì’ÿ = "; cin >> name;
	cout << " Ïî áàòüêîâ³ = "; cin >> middlename;
}

void Payment::Display() {
	cout << endl;

	cout << " Ïð³çâèùå = " << surname << endl;
	cout << " ²ì’ÿ = " << name << endl;
	cout << " Ïî áàòüêîâ³ = " << middlename << endl;
	cout << " Ê³ëüê³ñòü â³äïðàöüîâàíèõ äí³â â ì³ñÿö³ = " << spent << " äí³â " << endl;
	cout << " Ê³ëüê³ñòü ðîáî÷èõ äí³â â ì³ñÿö³ = " << experience << " äí³â " << endl;
	cout << " Ïðèáóòêîâèé ïîäàòîê ³ ïåíñ³éíèé ôîíä = 14 % " << endl;
	cout << " Îá÷èñëåííÿ íàðàõîâàíî¿ ñóìè = " << ³nterestt() << endl;
	cout << " Îá÷èñëåííÿ óòðèìàíî¿ ñóìè = " << accrued() << endl;
	cout << " Îá÷èñëåííÿ ñóìè, ùî âèäàºòüñÿ íà ðóêè = " << salary() << endl;
	cout << " Ñòàæ = " << incomee() << " ðîê³â " << endl;
}

double Payment::³nterestt() {
	return (rate / 100 * ³nterest) + rate;
}

double Payment::accrued() {
	return ((³nterestt()) / 100 * 14);
}

double Payment::salary() {
	return ³nterestt() - accrued();
}

double Payment::incomee() {
	return 2025 - income;
}
