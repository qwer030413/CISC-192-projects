#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
#include <cctype>


using namespace std;
class Employees{
    public: 
        string name;
        string ssn;
        string wage;
        int inum;
        string department;
        string datehire;

        Employees(string name, string ssn, string wage, string department, string datehire, int inum)
        {
            this->name = name;
            this->ssn = ssn;
            this->wage = wage;
            this->department = department;
            this->datehire = datehire;
            this->inum = inum;
        }
        
    


};


int main(){
    char input;
    string name, ssn, wage, department, datehire;
    int inum = 0;
    vector<Employees> list;
    ofstream Myfile("emplyeelist.txt");
    
 
    do{
        cout << "list employee program! \n";
        cout << "\n";
        cout << "n to add new employee \n";
        cout << "s to search existing employee \n";
        cout << "a to display all employee \n";
        cout << "e to edit information for employee \n";
        cout << "d to delete exisisting employee \n";
        cout << "f to save data \n";
        cout << "r to read data \n";
        cout << "q to quit program \n \n";
        cout << "Enter your choice: ";
        cin >> input;
        if(input == 'n')
        {
            cout << "new employee full name: ";
            getline(cin >> ws, name);
            cout << "new employee ssn: ";
            cin >> ssn;
            cout << "new employee wage: ";
            cin >> wage;
            cout << "new employee department: ";
            cin >> department;
            cout << "new employee datehire: ";
            cin >> datehire;
            list.push_back(Employees(name, ssn, wage, department, datehire, inum));
            inum++;
            cout << "new employee named " << name <<"with ID number "<< inum <<" created! \n";



        }

        else if(input == 's')
        {
            int search;
            int ind = -1;
            cout << "ID of employee to search: ";
            cin >> search;
            for(int i = 0; i < list.size(); i++)
            {
                if(search == list[i].inum)
                {
                    ind = i;
                }
            }
            if(ind == -1)
            {
                cout << "that employee does not exist! \n";
            }
            else{
                cout <<"employee found! \nemplyee info: \n\n";
                cout << "Name:\tSSN:\tWage:\tDepartment:\tHired Date:\tID: \n";
                cout << list[ind].name << "\t" << list[ind].ssn << "\t"<< list[ind].wage << "\t"<< list[ind].department << "\t\t"<< list[ind].datehire << "\t\t"<< list[ind].inum << "\t\n\n";

            }
            
            

        }
        
        
        else if(input == 'a')
        {
            cout << "Name:\tSSN:\tWage:\tDepartment:\tHired Date:\tID: \n";
            for(int i = 0; i < list.size(); i++)
            {
                cout << list[i].name << "\t" << list[i].ssn << "\t"<< list[i].wage << "\t"<< list[i].department << "\t\t"<< list[i].datehire << "\t\t"<< list[i].inum << "\t\n";
            }
        }
        else if(input == 'e')
        {
            int search;
            char edit;
            int inx = -1;
            cout << "ID of employee to edit info: ";
            cin >> search;
            for(int i = 0; i < list.size(); i++)
            {
                if(search == list[i].inum)
                {
                    inx = i;
                    cout <<"What would you want to edit? \n";
                    cout << "(a)Name\n(b)SSN\n(c)Wage\n(d)Department\n(e)Hired Date\n(f)ID\n(q)Go back\n";
                    cout << "enter your choice: ";
                    cin >> edit;
                    if(edit == 'a')
                    {
                        string inpt;
                        cout << "new name: ";
                        getline(cin >> ws, inpt);
                        list[i].name = inpt;
                        cout<< "updated, new name: " << list[i].name<< "\n";
                    }
                    else if(edit == 'b')
                    {
                        string inpt;
                        cout << "new SSN: ";
                        getline(cin >> ws, inpt);
                        list[i].ssn = inpt;
                        cout<< "updated, new SSN: " << list[i].ssn<< "\n";
                    }
                    else if(edit == 'c')
                    {
                        string inpt;
                        cout << "new Wage: ";
                        getline(cin >> ws, inpt);
                        list[i].wage = inpt;
                        cout<< "updated, new Wage: " << list[i].wage<< "\n";
                    }
                    else if(edit == 'd')
                    {
                        string inpt;
                        cout << "new Department: ";
                        getline(cin >> ws, inpt);
                        list[i].department = inpt;
                        cout<< "updated, new department: " << list[i].department<< "\n";
                    }
                    else if(edit == 'e')
                    {
                        string inpt;
                        cout << "new Hired Date: ";
                        getline(cin >> ws, inpt);
                        list[i].datehire = inpt;
                        cout<< "updated, new Hired Date: " << list[i].datehire<< "\n";
                    }
                    else if(edit == 'f')
                    {
                        int inpt;
                        cout << "new ID: ";
                        cin >> inpt;
                        list[i].inum = inpt;
                        cout<< "updated, new ID: " << list[i].inum << "\n";
                        
                    }
                    else if(edit == 'q')
                    {
                        break;
                    }
                }
            }
            if(inx == -1)
            {
                cout << "that employee does not exist! \n";
            }
        }
        else if(input == 'd')
        {
            int search;
            int ind = -1;
            cout << "ID of employee to delete: ";
            cin >> search;
            for(int i = 0; i < list.size(); i++)
            {
                if(search == list[i].inum)
                {
                    ind = i;
                    char yn;
                    cout << "Name:\tSSN:\tWage:\tDepartment:\tHired Date:\tID: \n";
                    cout << list[i].name << "\t" << list[i].ssn << "\t"<< list[i].wage << "\t"<< list[i].department << "\t\t"<< list[i].datehire << "\t\t"<< list[i].inum << "\t\n\n";
                    cout << "are you sure you want to delete this employee?(y/n): ";
                    cin >> yn;
                    if(yn == 'y')
                    {
                        list.erase(list.begin() + i );
                        cout << "emplyee erased! \n";
                    }
                    else{
                        break;
                    }


                }
            }
            if(ind == -1)
            {
                cout << "that employee does not exist! \n";
            }
        }
        else if(input == 'f')
        {
            Myfile.open("emplyeelist.txt");
            cout << setprecision(1) << fixed;
            Myfile << "Name:" << setw(15) << "SSN:" << setw(15) << "Wage:"<< setw(15) <<  "Department" << setw(15) <<"Hired Date:" << setw(15) <<"ID: \n";
            for(int i = 0; i < list.size(); i++)
            {
                Myfile << list[i].name << setw(15) << list[i].ssn << setw(15)<< list[i].wage << setw(15) << list[i].department << setw(15) << list[i].datehire << setw(15)<< list[i].inum << "\t\n";

            }
            Myfile.close();
            cout << "info saved in file! \n";
            
            
        }
        else if(input == 'r')
        {
            string f;
            ifstream myf("emplyeelist.txt");
            while(getline (myf, f))
            {
                cout <<f << "\n";
            }
            myf.close();
        }

    }while(input != 'q');
    
    // Myfile.close();

}