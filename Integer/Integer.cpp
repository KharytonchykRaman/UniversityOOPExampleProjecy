#include "Integer.h"

Integer& Integer::add(Integer a) {
	return Integer(value + a.getValue());
}

Integer& Integer::add(int a) {
	return Integer(value + a);
}

Integer& Integer::sub(Integer a) {
	return Integer(value - a.getValue());
}

Integer& Integer::sub(int a) {
	return Integer(value - a);
}

Integer& Integer::mul(Integer a) {
	return Integer(value * a.getValue());
}

Integer& Integer::mul(int a) {
	return Integer(value * a);
}

Integer& Integer::div(Integer a) {
	return Integer(value / a.getValue());
}

Integer& Integer::div(int a) {
	return Integer(value / a);
}

Integer& Integer::mod(Integer a) {
	return Integer(value % a.getValue());
}

Integer& Integer::mod(int a) {
	return Integer(value % a);
}

Integer& Integer::pow(Integer n) {
	int number = 1;
	for (int i = 0; i < n.getValue(); i++)
	{
		number *= value;
	}
	return Integer(number);
}

Integer& Integer::pow(int n) {
	int number = 1;
	for (int i = 0; i < n; i++)
	{
		number *= value;
	}
	return Integer(number);
}

Integer& Integer::opp() {
	return Integer(-value);
}

Integer& Integer::operator++() {
	return Integer(++value);
}

Integer& Integer::operator++(int) {
	return Integer(value++);
}

Integer& Integer::operator--() {
	return Integer(--value);
}

Integer& Integer::operator--(int) {
	return Integer(value--);
}

Integer& Integer::operator-() {
	return Integer(-value);
}

Integer& Integer::operator+(Integer a) {
	return Integer(value + a.getValue());
}

Integer& Integer::operator-(Integer a) {
	return Integer(value - a.getValue());
}

Integer& Integer::operator*(Integer a) {
	return Integer(value * a.getValue());
}

Integer& Integer::operator/(Integer a) {
	return Integer(value / a.getValue());
}

Integer& Integer::operator%(Integer a) {
	return Integer(value % a.getValue());
}

int Integer::getValue() {
	return value;
}

void Integer::setValue(int value) {
	this->value = value;
}