#include "MyRational.h"

myRational::myRational(long num, long den) {
    _num = num;
    _den = den;
    (*this).reduce();
}

myRational::myRational(const myRational& rat) {
    _num = rat._num;
    _den = rat._den;
}

long myRational::getNumerator() const {
    return _num;
}

long myRational::getDenominator() const {
    return _den;
}

myRational myRational::reciprocal() const {
    return myRational(_den, _num);
}

myRational myRational::operator +(const myRational& rat) const {
    myRational new_rat(_num * rat._den + _den * rat._num, _den * rat._den);
    new_rat.reduce();
    return new_rat;
}

myRational myRational::operator +(int value) const {
    return myRational(value) + (*this);
}

myRational operator +(int value, const myRational & rat) {
    return myRational(value) + rat;
}

myRational myRational::operator -(const myRational& rat) const {
    myRational new_rat(_num * rat._den - _den * rat._num, _den * rat._den);
    new_rat.reduce();
    return new_rat;
}

myRational myRational::operator -(int value) const {
    return (*this) - myRational(value);
}

myRational operator -(int value, const myRational& rat) {
    return myRational(value) - rat;
}

myRational myRational::operator *(const myRational& rat) const {
    myRational new_rat(_num * rat._num, _den * rat._den);
    new_rat.reduce();
    return new_rat;
}

myRational myRational::operator *(int value) const {
    return (*this) * myRational(value);
}

myRational operator *(int value, const myRational& rat) {
    return myRational(value) * rat;
}

myRational myRational::operator /(const myRational& rat) const {
    if (rat._num == 0)
        return myRational();
    myRational new_rat(_num * rat._den, _den * rat._num);
    new_rat.reduce();
    return new_rat;
}

myRational myRational::operator /(int value) const {
    return (*this) / myRational(value);
}

myRational operator /(int value, const myRational& rat) {
    return myRational(value) / rat;
}

myRational& myRational::operator =(const myRational& rat) {
    this->_num = rat._num;
    this->_den = rat._den;
    return *this;
}

myRational& myRational::operator =(int value) {
    _num = value;
    _den = 1;
    return *this;
}

myRational& myRational::operator +=(const myRational& rat) {
    *this = *this + rat;
    return *this;
}

myRational& myRational::operator -=(const myRational& rat) {
    *this = *this - rat;
    return *this;
}

myRational& myRational::operator *=(const myRational& rat) {
    *this = *this * rat;
    return *this;
}

myRational& myRational::operator /=(const myRational& rat) {
    *this = *this / rat;
    return *this;
}

bool myRational::operator ==(const myRational& rat) const {
    return (_num == rat._num) && (_den == rat._den);
}

bool myRational::operator !=(const myRational& rat) const {
    return (_num != rat._num) || (_den != rat._den);
}

bool myRational::operator >(const myRational& rat) const {
    return _num / _den > rat._num / rat._den;
}

bool myRational::operator >=(const myRational& rat) const {
    return _num / _den >= rat._num / rat._den;
}

bool myRational::operator <(const myRational& rat) const {
    return _num / _den < rat._num / rat._den;
}

bool myRational::operator <=(const myRational& rat) const {
    return _num / _den <= rat._num / rat._den;
}

myRational myRational::operator -() {
    return myRational(-_num, _den);
}

myRational& myRational::operator ++() {
    _num += _den;
    return *this;
}

myRational myRational::operator ++(int) {
    myRational temp(_num, _den);
    ++(*this);
    return temp;
}

myRational& myRational::operator --() {
    _num -= _den;
    return *this;
}

myRational myRational::operator --(int) {
    myRational temp(_num, _den);
    --(*this);
    return temp;
}

ostream& operator <<(ostream& outStream, const myRational& r)
{
    if (r._num == 0)
        outStream << 0;

    else if (r._den == 1)
        outStream << r._num;

    else
        outStream << r._num << "/" << r._den;

    return outStream;
}

istream& operator >>(istream& inStream, myRational& r)
{
    inStream >> r._num >> r._den;

    if (r._den == 0)
    {
        r._num = 0;
        r._den = 1;
    }
    r.reduce();

    return inStream;
}

long myRational::gcd(long m, long n)
{
    if (m == n)
        return n;
    else if (m < n)
        return gcd(m, n - m);
    else
        return gcd(m - n, n);
}

void myRational::reduce()
{
    if (_num == 0 || _den == 0)
    {
        _num = 0;
        _den = 1;
        return;
    }
    if (_den < 0)
    {
        _den *= -1;
        _num *= -1;
    }
    if (_num == 1)
        return;

    int sgn = (_num < 0 ? -1 : 1);
    long g = gcd(sgn * _num, _den);
    _num /= g;
    _den /= g;
}