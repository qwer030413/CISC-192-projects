#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <cmath>

#include <bits/stdc++.h>
#include <cctype>


using namespace std;
class NumDays{
    public:
    int hours;
    NumDays(int h){
        hours = h;
    }
    
};
NumDays operator+(NumDays const& num1, NumDays const& num2)
{
    return NumDays(num1.hours + num2.hours);
}
NumDays operator-(NumDays const& num1, NumDays const& num2)
{
    return NumDays(num1.hours - num2.hours);
}


double operator++(NumDays const& num)
{
    return num.hours + 2;
}
double operator--(NumDays const& num)
{
    return num.hours - 2;


}

double days(int d)
{
    double day = d / 8.0;
    return round((day * 100.0))/100.0;
}

int main(){
    int input1;
    int input2;
    do{
        cout<< "Enter the number of work hours(-1 to quit): ";
        cin >> input1;
        NumDays hour1(input1);
        if(input1 == -1)
        {
            break;
        }
        cout << "One: " << days(input1) << " days" << "\n";

        cout<< "Enter Another number of work hours(-1 to quit): ";
        cin >> input2;
        NumDays hour2(input2);
        if(input2 == -1)
        {
            break;
        }
        cout << "Two: " << days(input2) << " days"<<"\n";


        NumDays add = hour1 + hour2;
        NumDays sub = hour1 - hour2;
        NumDays increment = ++hour1;
        NumDays decrease = --hour2;
        cout << "Addition: One + Two: " << days(add.hours) << " days"<<"\n";
        cout << "Subtraction: One - Two: " << days(sub.hours) <<"days"<< "\n";
        
        cout << "++One: " << days((hour1.hours)) <<" days"<< "\n";
        cout << "One++: " << days((increment.hours)) <<" days"<< "\n";
        cout << "Two--: " << days((hour2.hours)) <<" days"<< "\n";
        cout << "--Two: "  << days((decrease.hours)) <<" days"<< "\n";

        

    }while(input1 != -1 || input2 != -1);
    cout<< "Programmed by: Chris Park";


}