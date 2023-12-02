#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <cmath>

#include <bits/stdc++.h>
#include <cctype>


using namespace std;
long long pattern(long long i){
    if(i > 0)
    {
        return i * i + pattern(i-1);
    }
    else
    {
        return 0;
    }
    
   
}
int main(){
    int input;
    
        cout << "The first twenty numbers in the pattern: \n";
        cout <<"Order   Number\n";
        for(int i = 1; i < 21; i++)
        {
            cout << i << "       " << pattern(i) << "\n"; 
        }

        do{
        cout << "What's the ordered element in the pattern that you wanted to find? \n(Or enter 0 to end): ";
        cin >> input;
        cout << "The element corresponding to "<< input << " is: "  << pattern(input) << "\n";


    }while(input != 0);
    cout << "Programmed by Chris Park for CICS 192";
}