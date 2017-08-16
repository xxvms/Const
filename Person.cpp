//
// Created by tombr on 16/08/2017.
//

#include "Person.h"
Person::Person(std::string first, std::string last, int arbitrary): first_name(first), last_name(last), arbitrary_number(arbitrary) {}
Person::~Person() {}
std::string Person::Get_name()const {
    return first_name + " " + last_name;
}
bool Person::operator<(const Person& p) const {
    return arbitrary_number < p.arbitrary_number;
}
bool Person::operator<(int i) const {
    return arbitrary_number < i;
}
bool operator< (int i, const Person& p)  { // because this is not member function we don't put const at the end!!!!
    return i < p.Get_number();
}

int Person::operator + (const  Person& p) const{
    return arbitrary_number + p.arbitrary_number;
}
int Person::operator-(const Person &p) const {
    return arbitrary_number - p.arbitrary_number;
}