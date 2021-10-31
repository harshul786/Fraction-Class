#include<iostream>
#include "fraction.cpp"
using namespace std;


int main()
{
    fraction f1(1,2);
    fraction f2(1,2);

    f1.multiply(f2);

    f1.print();
    return 0;
}
