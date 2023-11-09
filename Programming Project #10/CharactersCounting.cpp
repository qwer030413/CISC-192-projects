#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <bits/stdc++.h>
#include <cctype>


using namespace std;

int main(){
    string input;
    string digits = "Digets: ";
    string vowels = "Vowels: ";
    string cons = "Consonants: ";
    string special = "!@#$%^&*()_+{}|";
    int j= 0;
    do{
        cout <<  "Enter a string: ";
        getline(cin, input);
        
      
        for(int i = 0; i < input.size(); i++)
        {
            if(isdigit(input[i])){
                digits += input[i];
                digits += ", ";
            }
            else if(input[i] == 'a' ||  input[i] == 'A' || input[i] == 'e'|| input[i] == 'E'|| input[i] == 'I'|| input[i] == 'i'|| input[i] == 'o'|| input[i] == 'O'||input[i] == 'u'||input[i] == 'U')
            {
                vowels += input[i];
                vowels += ", ";
            }
            else if((input[i]>=48 && input[i]<=57)||
        (input[i]>=65 && input[i]<=90)||
        (input[i]>=97 && input[i]<=122)){
                cons += input[i];
                cons += ", ";
            }


        }
    cout << digits << "\n" << vowels << "\n" << cons << "\n";
    digits = "Digets: ";
    vowels = "Vowels: ";
    cons = "Consonants: ";

    }while(input != "n");
}