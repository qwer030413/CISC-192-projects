#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <bits/stdc++.h>
#include <cctype>


using namespace std;

int main(){
    string input;
    string digits = "";
    string vowels = "";
    string cons = "";
    int d = 0;
    int c = 0;
    int v = 0;
    string special = "!@#$%^&*()_+{}|";
    int j= 0;
    do{
        cout <<  "Enter a string: ";
        getline(cin, input);
        if(input == "n")
        {
            break;
        }
      
        for(int i = 0; i < input.size(); i++)
        {
            if(isdigit(input[i])){
                digits += input[i];
                digits += ", ";
                d++;
            }
            else if(input[i] == 'a' ||  input[i] == 'A' || input[i] == 'e'|| input[i] == 'E'|| input[i] == 'I'|| input[i] == 'i'|| input[i] == 'o'|| input[i] == 'O'||input[i] == 'u'||input[i] == 'U')
            {
                vowels += input[i];
                vowels += ", ";
                v++;
            }
            else if((input[i]>=48 && input[i]<=57)||
        (input[i]>=65 && input[i]<=90)||
        (input[i]>=97 && input[i]<=122)){
                cons += input[i];
                cons += ", ";
                c++;
            }


        }
    cout << "Digets: " << " " << d << " --> "<< digits << "\n" << "Vowels: "  << " " << v << " --> "<< vowels <<"\n" << "Consonants: "  << " " << c << " --> "<< cons <<"\n";
    digits = "";
    vowels = "";
    cons = "";
    d = 0;
    v = 0;
    c = 0;

    }while(input != "n");
    cout << "Programmed by: Seojin Park for CISC 192";
}