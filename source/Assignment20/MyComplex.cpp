#include "MyComplex.h"

// Constructor (생성자)
myComplex::myComplex(int real, int imag)
{
    realPart = real;
    imaginaryPart = imag;
}

// Copy constructor (복사 생성자)
myComplex::myComplex(const myComplex& number)
{
    realPart = number.realPart;
    imaginaryPart = number.imaginaryPart;
}

// Accessor functions (접근자)
int myComplex::getRealPart() const
{
    return realPart;
}

int myComplex::getImaginaryPart() const
{
    return imaginaryPart;
}

// Mutator functions (변경자)
void myComplex::setRealPart(int real)
{
    realPart = real;
}

void myComplex::setImaginaryPart(int imag)
{
    imaginaryPart = imag;
}

void myComplex::set(int real, int imag)
{
    realPart = real;
    imaginaryPart = imag;
}

// Overloaded binary operators (산술 연산자)
myComplex myComplex::operator +(const myComplex& number) const
{
    return myComplex(realPart + number.realPart, imaginaryPart + number.imaginaryPart);
}

myComplex myComplex::operator +(int value) const
{
    return myComplex(value) + (*this);
}

myComplex operator +(int value, const myComplex& number)
{
    return myComplex(value) + number;
}

myComplex myComplex::operator -(const myComplex& number) const
{
    return myComplex(realPart - number.realPart, imaginaryPart - number.imaginaryPart);
}

myComplex myComplex::operator -(int value) const
{
    return (*this) - myComplex(value);
}

myComplex operator -(int value, const myComplex& number)
{
    return myComplex(value) - number;
}

myComplex myComplex::operator *(const myComplex& number) const
{
    return myComplex(realPart * number.realPart - imaginaryPart * number.imaginaryPart,
        realPart * number.imaginaryPart + imaginaryPart * number.realPart);
}

myComplex myComplex::operator *(int value) const
{
    return myComplex(value * realPart, value * imaginaryPart);
}

myComplex operator *(int value, const myComplex& number)
{
    return myComplex(value * number.realPart, value * number.imaginaryPart);
}

// Overloaded assignment operators (대입 연산자)
myComplex& myComplex::operator =(const myComplex& number)
{
    this->realPart = number.realPart;
    this->imaginaryPart = number.imaginaryPart;
    return *this;
};

myComplex& myComplex::operator =(int value)
{
    realPart = value;
    imaginaryPart = 0;
    return *this;
}

myComplex& myComplex::operator +=(const myComplex& number)
{
    *this = *this + number;
    return *this;
}

myComplex& myComplex::operator -=(const myComplex& number)
{
    *this = *this - number;
    return *this;
}

myComplex& myComplex::operator *=(const myComplex& number)
{
    *this = *this * number;
    return *this;
}

// Overloaded relational operators (관계 연산자)
bool myComplex::operator ==(const myComplex& number) const
{
    return (realPart == number.realPart) &&
        (imaginaryPart == number.imaginaryPart);
}

bool myComplex::operator !=(const myComplex& number) const
{
    return (realPart != number.realPart) ||
        (imaginaryPart != number.imaginaryPart);
}

bool myComplex::operator >(const myComplex& number) const
{
    return norm() > number.norm();
}

bool myComplex::operator >=(const myComplex& number) const
{
    return norm() >= number.norm();
}

bool myComplex::operator <(const myComplex& number) const
{
    return norm() < number.norm();
}

bool myComplex::operator <=(const myComplex& number) const
{
    return norm() <= number.norm();
}

// Overloaded unary operators (단항 연산자)
myComplex myComplex::operator -()
{
    return myComplex(-realPart, -imaginaryPart);
}

myComplex myComplex::operator ~()
{
    return myComplex(realPart, -imaginaryPart);
}

myComplex& myComplex::operator ++()
{
    ++realPart;
    return *this;
}

myComplex myComplex::operator ++(int)
{
    myComplex temp(realPart, imaginaryPart);
    ++(*this);
    return temp;
}

myComplex& myComplex::operator --()
{
    --realPart;
    return *this;
}

myComplex myComplex::operator --(int)
{
    myComplex temp(realPart, imaginaryPart);
    --(*this);
    return temp;
}

// private function
int myComplex::norm() const
{
    return realPart * realPart + imaginaryPart * imaginaryPart;
}

ostream& operator <<(ostream& outStream, const myComplex& number)
{
    outStream << "(" << number.realPart << "," << number.imaginaryPart << ")";
    return outStream;
}

istream& operator >>(istream& inStream, myComplex& number)
{
    inStream >> number.realPart >> number.imaginaryPart;
    return inStream;
}
