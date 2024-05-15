#pragma once
class Integer
{
private:
	int value;
public:
	Integer() :value(0) {};
	Integer(int value) :value(value) {};

	Integer& add(Integer a);
	Integer& add(int a);
	Integer& sub(Integer a);
	Integer& sub(int a);
	Integer& mul(Integer a);
	Integer& mul(int a);
	Integer& div(Integer a);
	Integer& div(int a);
	Integer& mod(Integer a);
	Integer& mod(int a);
	Integer& pow(Integer n);
	Integer& pow(int n);
	Integer& opp();

	Integer& operator++();
	Integer& operator++(int);
	Integer& operator--();
	Integer& operator--(int);
	Integer& operator-();
	Integer& operator+(Integer a);
	Integer& operator-(Integer a);
	Integer& operator*(Integer a);
	Integer& operator/(Integer a);
	Integer& operator%(Integer a);

	int getValue();
	void setValue(int value);
};