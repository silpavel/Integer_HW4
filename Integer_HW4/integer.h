#pragma once
#ifndef INTEGER_H
#define INTEGER_H
class InnerInteger {
	int value;
public:
	InnerInteger(int);
	~InnerInteger();
	void set(int);
	int get();
	//нет копирующего конструктора т.к. нет полей-указателей
};
class Integer {
	//InnerInteger *innerInt;
public:
	InnerInteger *innerInt;//помещен сюда для проверки
	//Metods
	void show();
	//operators
	Integer operator+(const Integer &r);
	Integer operator-(const Integer &r);
	Integer operator=(const Integer &r);
	Integer operator*(const Integer &r);
	Integer operator/(const Integer &r);
	Integer operator%(const Integer &r);

	//constructors+destructor	
	Integer(int);
	Integer(const Integer&);
	~Integer();
};
#endif INTEGER_H