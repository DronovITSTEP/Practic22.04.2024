#pragma once
#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;

public:
	Date(int d, int m, int y) : day{d}, month{m}, year{y}{}
	Date() : Date(1, 1, 1970){}

	void print() {
		cout << day << "-" << month << "-" << year << endl;
	}

	Date& setDay(int d) { 
		day = d; 
		return *this;
	}
	Date& setMonth(int m) {
		month = m; 
		return *this;
	}
	Date& setYear(int y) {
		year = y;
		return *this;
	}
};

class Fraction {
	int numerator;
	int denominator;
public:
	int* arr;
	Fraction(int num, int denom) : numerator{ num }, denominator{ denom } {
		cout << "Fraction constructor " << this << endl;
		arr = new int[5] {1,2,3,4,5};		
	}
	Fraction(): Fraction(1,1){}
	~Fraction() {
		cout << "Fraction destructor " << this << endl;
	}
	// конструктор копирования
	/*
	ClassName(const ClassName& name){}
	*/
	Fraction(const Fraction& fract) : numerator{fract.numerator}, 
		denominator{fract.denominator} {
		/*arr = new int[5];
		for (int i = 0; i < 5; i++) {
			arr[i] = fract.arr[i];
		}*/
		arr = fract.arr;
		cout << "Fraction copy constructor " << this << endl;
	}

	void print() {
		cout << numerator << "/" << denominator << endl;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};

