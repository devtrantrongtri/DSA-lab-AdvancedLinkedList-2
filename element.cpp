#include "element.h"

element::element()
{
    this->data = 0;
    this->exponent = 0;
    this ->pointer = nullptr;

}// nX^m data :n ; exponent : m ; 
element::element(int data, int exponent)
{
    this ->data = data;
    this ->exponent = exponent;
    this->pointer = nullptr;
}
element::~element()
{
    //dtor
}
