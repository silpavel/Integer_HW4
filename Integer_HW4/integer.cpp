#include "integer.h"
#include <iostream>
using namespace std;

Integer::Integer(int value){
	cout << (int)this << '\t' << "Integer(int)\n";
	innerInt = new InnerInteger(value);
}
Integer::Integer(const Integer &obj ) {
	cout << (int)this << '\t' << "CopyInteger()!\n";
	innerInt = new InnerInteger(obj.innerInt->get());
}
Integer::~Integer() {
	delete innerInt;
	cout << (int)this << '\t' << "~~~Integer()!\n";
}
void Integer::show() {
	cout <<"\nvalue=" <<innerInt->get() << endl;
}
Integer Integer::operator+(const Integer &r) {
	return Integer(innerInt->get()+r.innerInt->get());
}
Integer Integer::operator-(const Integer &r) {
	return Integer(innerInt->get() - r.innerInt->get());
}
Integer Integer::operator=(const Integer &r) {
	innerInt->set(r.innerInt->get());
	return *this;
	//без перегрузки оператора присваивание sum=
	//выкидывает исключение, хотя nt1+nt2 нормально работает
	//т.к. конструктор копирования не создает InnerInteger
	//потому что даже не запускается
	//да и не должен при sum=a+b  только при Integer sum=nt1
}
InnerInteger::InnerInteger(int value) :value(value) {
	cout << '\t'<<(int)this << '\t' << "InnerInteger()!\n";
}
InnerInteger::~InnerInteger() {
	cout << '\t' << (int)this << '\t' << "~~~InnerInteger()!\n";
}
void InnerInteger::set(int value) {
	this->value = value;
}
int InnerInteger::get() {
	return value;
}





