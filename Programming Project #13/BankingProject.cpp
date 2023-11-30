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
    
        virtual void withdraw(double amount) = 0;
        virtual void deposit(double amount) = 0;
        virtual void interest() = 0;
        virtual double displayBalance() = 0;
        virtual void transfer(double amount) = 0;

    
    
    
};

class checking : public bank{
    public:
    string fullname;
    string ssnum;
    double balance = 0;
    double money;
    int idnum;
    
    checking(int id, string name, string ssn){
        idnum = id;
        fullname = name;
        ssnum = ssn;

    }
    void deposit(double money) override{
        balance += money - 5;

        
    }
    void withdraw(double money) override {
        
        balance -= money;
        
    }
    double displayBalance() override{
        return balance;
    }
    void interest() override {
        cout << "interest: " << balance * 0.025 <<"\n";
        balance += balance * 0.025;
        cout << "balance: " << balance << "\n";
    }
    void transfer(double amount) override{
        balance -= amount;
    }
    


};
class saving : public bank{
    public:
    string fullname;
    string ssnum;
    double balance = 0;
    double money;
    int idnum;
    
    saving(int id, string name, string ssn){
        idnum = id;
        fullname = name;
        ssnum = ssn;

    }
    void deposit(double money) override{
        balance += money;

        
    }
    void withdraw(double money) override {
        
        balance -= money;
        
        
    }
    double displayBalance() override{
        return balance;
    }
    void interest() override {
        cout << "interest: " << balance * 0.0375 <<"\n";
        balance += balance * 0.0375;
        cout << "balance: " << balance << "\n";
    }
    void transfer(double amount) override{
        balance -= amount;
    }
    


};
int main(){
    int input;
    string name;
    string title;
    string ssn;
    char choice;
    double money;
    int c = 0;

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
    checking check(001, name, ssn);
    saving save(002, name, ssn);
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
        
        
            
            cout <<"------------------------------------------------------------------------------------ \n";
            if(input == 1)
            {
                
                do{
                    cout << "Checking Account \n";
                    cout << "Account Activities \n";
                    cout << "a) deposit \n";
                    cout << "b) withdraw \n";
                    cout << "c) transfer \n";
                    cout << "d) balance \n";
                    cout << "e) personal check \n";
                    cout << "f) interest\n";
                    cout << "g) done \n";
                    cout << "\n";
                    cout << "Enter your choice: ";
                    cin >> choice;
                    if(choice == 'a')
                    {
                        cout << "Enter amount to deposit: ";
                        cin >> money;
                        check.deposit(money);
                        cout << "deposit done to checking \n";
                        cout << "Checking balance: " << check.displayBalance() << "\n";
                    }
                    else if(choice == 'b')
                    {
                        cout << "withdrwaw amount: ";
                        cin >> money;
                        check.withdraw(money);
                        cout << "withdrawl done to checking \n";
                        cout << "Checking balance: " << check.displayBalance() << "\n";
                    }
                    else if(choice == 'c')
                    {
                        cout << "1) from checkings to savings \n";
                        cout << "2) from savings to checkings \n";
                        cin >> input;
                        if(input == 1)
                        {
                            cout << "Enter amount to transfer: ";
                            cin >> money;
                            check.withdraw(money);
                            save.deposit(money);
                            cout << "Transfer successful \n";
                            cout << "Checking balance: " << check.displayBalance() << "\n";
                            cout << "Savings balance: " << save.displayBalance() << "\n";
                        }
                        else{
                            cout << "error";
                        }

                    }
                    else if(choice == 'd')
                    {
                        cout << "balance: " << check.displayBalance();

                    }
                    else if(choice == 'e')
                    {
                        cout << "Enter amount to withdraw: ";
                        cin >>money;
                        if(check.displayBalance() < money)
                        {
                            if(c == 0)
                            {
                                check.withdraw(money + 15);
                            }
                            else{
                                check.withdraw(money + 15.1);
                            }
                            c++;
                            cout << "done \n";
                            cout << "you written " << c << " checks";
                            cout << "Checking balance: " << check.displayBalance() << "\n";
                        }
                        else{
                            if(c == 0)
                            {
                                check.withdraw(money);
                            }
                            else{
                                check.withdraw(money + 0.1);
                            }
                            c++;
                            cout << "done \n";
                            cout << "you written " << c << " checks";
                            cout << "Checking balance: " << check.displayBalance() << "\n";
                        }
                        
                        
                        


                    }
                    else if(choice == 'f')
                    {
                        check.interest();

                    }
                    else if(choice == 'g')
                    {
                        break;

                    }
                }while(choice != 'g');
            
            }
            else if(input == 2)
            {
                
                 do{
                    cout << "Saving Account \n";
                    cout << "Account Activities \n";
                    cout << "a) deposit \n";
                    cout << "b) withdraw \n";
                    cout << "c) transfer \n";
                    cout << "d) balance \n";
                    cout << "e) personal check \n";
                    cout << "f) interest\n";
                    cout << "g) done \n";
                    cout << "\n";
                    cout << "Enter your choice: ";
                    cin >> choice;
                    if(choice == 'a')
                        {
                            cout << "Enter amount to deposit: ";
                                cin >> money;
                                save.deposit(money);
                                cout << "deposit done to savings \n";
                                cout << "savings balance: " << save.displayBalance() << "\n";
                        }
                        else if(choice == 'b')
                        {
                            cout << "withdrwaw amount: ";
                            cin >> money;
                            save.withdraw(money);
                            if(save.displayBalance() < 25)
                            {
                                cout<< "balance less than 25, withdrawls are not allowed \n";
                                
                            }
                            else{
                                cout << "withdrawl done to savings \n";
                                cout << "savings balance: " << save.displayBalance() << "\n";
                            }
                            
                        }
                        else if(choice == 'c')
                        {
                            
                            cout << "1) from checkings to savings \n";
                            cout << "2) from savings to checkings \n";
                            cin >> input;
                            if(input == 1)
                            {
                                cout << "Enter amount to transfer: ";
                                cin >> money;
                                check.withdraw(money- 1);
                                save.deposit(money - 1);
                                cout << "Transfer successful \n";
                                cout << "Checking balance: " << check.displayBalance() << "\n";
                                cout << "Savings balance: " << save.displayBalance() << "\n";
                            }
                            else{
                                cout << "error";
                            }
                        }
                        else if(choice == 'd')
                        {
                            cout << "balance: " << save.displayBalance();
                        }
                        else if(choice == 'e')
                        {

                        }
                        else if(choice == 'f')
                        {
                            save.interest();

                        }
                        else if(choice == 'g')
                        {
                            break;

                        }
                    
                 }while(choice != 'g');
                
            }
            
            
            
           
            


        

    }while(input != -1);

    }


