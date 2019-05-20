#include "integer.h"
#include <iostream>
using namespace std;
Integer::Integer() :value(0) {
	cout << (int)this<<'\t'<< "Constructor without parameters!\n";
}
Integer::Integer(int i):value(i){
	cout << (int)this << '\t' << "Constructor with one parameter!\n";
}
Integer::Integer(const Integer&) {
	cout << (int)this << '\t' << "Copy constructor!\n";
}
Integer::~Integer() {
	cout << (int)this << '\t' << "Destructor!\n";
}
Integer Integer::operator+(const Integer &r) {
	return Integer(value + r.value);
}
void Integer::show() {
	cout <<"\nvalue= " <<value << endl;
}