#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <bits/stdc++.h>

using namespace std;

struct fraction
{
    double top;
    double bottom;
};


int findDash(string fraction)
{
    int index = -1;
    for(int i = 0; i < fraction.size(); i++){
        if(fraction[i] == '/')
        {
            index = i;
        }
        
    }
    return index;
}
int justChecking(int top, int bottom){
    if (bottom == 0){
           return top;

    }
   return justChecking(bottom, top % bottom);

}
int main(){
    char yn;
    string frac1;
    string frac2;
    double gcd1;
    double gcd2;
    double result1;
    double result2;
    fraction val1;
    fraction val2;
    do{
        
        
        cout << "Enter a rational number (a/b): ";
        cin >> frac1;
        val1.top = stoi(frac1.substr(0,findDash(frac1)));
        val1.bottom = stoi(frac1.substr(findDash(frac1) + 1));
        gcd1 = justChecking(val1.top,val1.bottom);
        cout<< "(Just checking, you entered: " << val1.top / gcd1 << "/" << val1.bottom/gcd1 << "-- reduced form)\n";
        
        cout << "Enter a rational number (a/b): ";
        cin >> frac2;
        val2.top = stoi(frac2.substr(0,findDash(frac2)));
        val2.bottom = stoi(frac2.substr(findDash(frac2) + 1));
        gcd2 = justChecking(val2.top,val2.bottom);
        cout<< "(Just checking, you entered: " << val2.top / gcd2 << "/" << val2.bottom/gcd2 << "-- reduced form)\n";
        
        if(findDash(frac1) == -1 || findDash(frac2) == -1)
        {
            cout << "values are not in right format! \n";
        }
        else{
            result1 = val1.top/val1.bottom;
        result2 = val2.top/val2.bottom;
        cout<<"Results of Arithmetic operations: \n";
            cout<<frac1 <<" + " << frac2 << " = " << val1.top * val2.bottom + val2.top * val1.bottom << "/" << val1.bottom * val2.bottom << " = "<<round((result1 + result2)*100.0) / 100.0 << "\n";
            cout<<frac1 <<" - " << frac2 << " = " << val1.top * val2.bottom - val2.top * val1.bottom << "/" << val1.bottom * val2.bottom << " = "<<round((result1 - result2)*100.0) / 100.0 << "\n";
            cout<<frac1 <<" * " << frac2 << " = " << val1.top * val2.top << "/" << val1.bottom * val2.bottom << " = "<<round((result1 * result2)*100.0) / 100.0 << "\n";
            cout<<frac1 <<" / " << frac2 << " = " << val1.top * val2.bottom  << "/" << val1.bottom * val2.top << " = "<<round((result1 / result2)*100.0) / 100.0 << "\n";
        }
        

        
        


        cout << "Run again (y/n)? ";
        cin >> yn;




    }while(yn != 'n');

    cout<< "programmer: Chris(Seojin) Park - written for the class CISC 192";

}