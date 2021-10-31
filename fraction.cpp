#include<iostream>
using namespace std;

class fraction
{
    int numerator;
    int denominator;

public:
    fraction(int num, int din){
        numerator = num;
        denominator=din;
    }

    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }

    void simplify(){
        int gcd = 1;
        int j = min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++){
            if(this->numerator%i == 0 && this->denominator%i==0){
                gcd=i;
            }
        }

        this->numerator= this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }

    void add(fraction const &f2){
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int num = x*numerator + (y*f2.numerator);

        this->numerator = num;
        this->denominator = lcm;

        simplify();
    }

    void multiply(fraction const &f2){
        this->numerator = this->numerator*f2.numerator;
        this->denominator*=f2.denominator;
        simplify();
    }
};



