#pragma once
#ifndef INTEGER_H
#define INTEGER_H
class Integer {
	int value;
public:
	//Metods
	void show();
	//operators
	Integer operator+(const Integer &r);
	//constructors+destructor	
	Integer();
	Integer(int);
	Integer(const Integer&);
	~Integer();
};
#endif INTEGER_H