#include "integer.h"
#include <iostream>
using namespace std;
//other function
void Integer::show() {
	cout <<"\nvalue=" <<innerInt->get() << endl;
}
//operators
Integer Integer::operator+(const Integer &r) {
	return Integer(innerInt->get()+r.innerInt->get());
}
Integer Integer::operator-(const Integer &r) {
	return Integer(innerInt->get() - r.innerInt->get());
}
Integer Integer::operator=(const Integer &r) {
	innerInt->set(r.innerInt->get());//var1.field=var2.field
	return *this;
}
Integer Integer::operator*(const Integer &r) {
	return Integer(innerInt->get() * r.innerInt->get());
}
Integer Integer::operator/(const Integer &r) {
	return Integer(innerInt->get() / r.innerInt->get());
}
Integer Integer::operator%(const Integer &r) {
	return Integer(innerInt->get() % r.innerInt->get());
}
Integer& Integer::operator++() {
	innerInt->set(innerInt->get()+1);
	return *this;
}
Integer Integer::operator++(int) {
	Integer oldValue=*this;
	innerInt->set(innerInt->get()+1);
	return oldValue;
}
Integer& Integer::operator--() {
	innerInt->set(innerInt->get() - 1);
	return *this;
}
Integer Integer::operator--(int) {
	Integer oldValue = *this;
	innerInt->set(innerInt->get() - 1);
	return oldValue;
}


//constructors+destructors
Integer::Integer(int value) {
	cout << (int)this << '\t' << "Integer(int)\n";
	innerInt = new InnerInteger(value);
}
Integer::Integer(const Integer &obj) {
	cout << (int)this << '\t' << "CopyInteger()!\n";
	innerInt = new InnerInteger(obj.innerInt->get());
}
Integer::~Integer() {
	delete innerInt;
	cout << (int)this << '\t' << "~~~Integer()!\n";
}
InnerInteger::InnerInteger(int value) :value(value) {
	cout << '\t'<<(int)this << '\t' << "InnerInteger()!\n";
}
InnerInteger::~InnerInteger() {
	cout << '\t' << (int)this << '\t' << "~~~InnerInteger()!\n";
}
//getters+setters
void InnerInteger::set(int value) {
	this->value = value;
}
int InnerInteger::get() {
	return value;
}





