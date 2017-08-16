#include <iostream>
#include "Person.h"
//int DoubleIt (int& x) // will not work
int DoubleIt(const int& x){
    return x*2;
}


int main() {
    int i = 3;
    const int ci = 3;
    i = 4;
    //ci = 5;

    int j = 10;
    int DoubleJ = DoubleIt(j);
    int DoubleTen = DoubleIt(10); // we have to pass to as const reference

    Person John("John", "Snow", 234);

    John.Set_number(235);
    const Person cJohn = John;
    //cJohn.Set_number(236); // is not going to work as cJohn is const
    int JohnNumber = cJohn.Get_number();

    return 0;
}