#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <cmath>

#include <bits/stdc++.h>
#include <cctype>


using namespace std;
class bank{
    public:

};

class account : public bank{

};
int main(){
    int input;
    string name;
    string title;
    string ssn;
    cout << "Welcome to Chris Parks Enterprise Bank!! \n";
    cout << "\n";
    cout << "please register: \n";
    cout << "full name: ";
    cin >> name;
    cout << "title: ";
    cin >> title;
    cout << "SSN: ";
    cin >> ssn;
    cout << "How are you today "<< title << " " << name << "\n";
    do{
        cout <<"------------------------------------------------------------------------------------ \n";
        cout << "Bank services menu \n";
        cout << "------------------ \n";
        cout << "1) Checking Account \n";
        cout << "2) Savings Account \n";
        cout << "-1) End of services \n";
        cout << "\n";
        cout << "Enter choice: ";
        cin >> input;






        


    }while(input != -1);


}