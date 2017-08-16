//
// Created by tombr on 16/08/2017.
//

#ifndef CONST_PERSON_H
#define CONST_PERSON_H

#include <string>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
    std::string Get_name()const;
    int Get_number() const { return  arbitrary_number; } // by adding word const after function name allow us to use this function with const objects as we guarantee that it will not change anything
    void Set_number(int number) { arbitrary_number = number; }
    bool operator< (const Person& p) const;
    bool operator< (int i) const ;
    int operator+ (const Person& p) const;
    int operator- (const Person& p) const;
    friend bool operator< (int i, const Person& p);

};
bool operator<(int i, const Person& p);

#endif //CONST_PERSON_H
