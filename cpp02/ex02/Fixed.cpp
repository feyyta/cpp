/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:30:53 by mcastrat          #+#    #+#             */
/*   Updated: 2025/12/11 14:21:03 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _fractionalBits){// *256 ou 2^8
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _fractionalBits))){//cant bit shift float equivalent de * 256
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	//std::cout << "Copy constructor called" << std::endl;
	this->_value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other){
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_value = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return this->_value;
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}

float Fixed::toFloat(void) const{
	return (float)this->_value / (1 << _fractionalBits);//reverse
}

int Fixed::toInt(void) const{
	return this->_value >> _fractionalBits;//bit shift opposide 
}
						//std::cout					//a, b ect
std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return out;
}

/*neeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeew*/

bool Fixed::operator>(const Fixed &other) const{//compare always w brut value its same
	return this->_value > other._value;
}

bool Fixed::operator<(const Fixed &other) const{
	return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const{
	return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const{
	return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const{
	return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const{
	return this->_value != other._value;
}

Fixed Fixed::operator+(const Fixed &other) const{
	Fixed result;
	result.setRawBits(this->_value + other._value);
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const{
	Fixed result;
	result.setRawBits(this->_value - other._value);
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const{
	Fixed result;
	result.setRawBits((this->_value * other._value) >> _fractionalBits);// / 256 establishd scalling factor
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const{
	Fixed result;
	result.setRawBits((this->_value << _fractionalBits) / other._value);// dividende need to be scalled
	return result;
}

Fixed &Fixed::operator++(void){
	this->_value++;
	return *this;
}
//convention entre post et pre incr
Fixed Fixed::operator++(int){
	Fixed temp(*this);
	this->_value++;
	return temp;
}

Fixed &Fixed::operator--(void){
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp(*this);
	this->_value--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return a;
	return b;
}

