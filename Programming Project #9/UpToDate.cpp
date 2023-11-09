#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <bits/stdc++.h>

using namespace std;

class dates{
    public:
        int month, day, year;
};
int findDash(string date)
{
    int index = -1;
    for(int i = 0; i < date.size(); i++){
        if(date[i] == '/')
        {
            index = i;
            break;
        }
        
    }
    return index;
}
int removeZero(int num) 
{ 
    string temp;
    temp = to_string(num);
    for(int i = 0; i < temp.size(); i++)
    {
        if(temp[i] == '0')
        temp.erase(0,i);
    }
  
    return stoi(temp); 
} 
int main(){
    string input;
    string dateInput;
    dates dateobject;
    string dayYear;
    string month [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    do{
            cout << "The program displays a valid date in three different formats. \n";
            cout <<"Note: All junk data will be rejected! \n";
            cout <<"Enter a date (mm/dd/yyyy) or n to end:";
            cin >> dateInput;
            if(findDash(dateInput) == -1)
            {
                cout <<"Date: " << dateInput << " is Invalid \n";

            }
            else{
                dateobject.month = stoi(dateInput.substr(0,findDash(dateInput)));
                dayYear = dateInput.substr(findDash(dateInput) + 1);
                dateobject.day = stoi(dayYear.substr(0,findDash(dayYear)));
                dateobject.year = stoi(dayYear.substr(findDash(dayYear) + 1));
                if(dateInput.substr(0,findDash(dateInput)).size() < 2 || dayYear.substr(0,findDash(dayYear)).size() < 2 || dayYear.substr(findDash(dayYear) + 1).size() < 4){
                    cout <<"Date: " << dateInput << " is Invalid \n";

                }
                else{
                    if(dateobject.year % 4 == 0)
                {
                    cout << dateobject.year << " -> Leap Year! \n";
                    if(dateobject.day < 32 && dateobject.month < 13)
                    {
                        if(dateobject.month == 1 ||dateobject.month == 3 ||dateobject.month == 5 ||dateobject.month == 7 ||dateobject.month == 8 ||dateobject.month == 10 ||dateobject.month == 12 ){
                            if(dateobject.day > 31){
                                cout <<"Date: " << dateInput << " is Invalid \n";

                            }
                            else{
                                cout<< dateInput << "(US) \n";
                                cout<< month[dateobject.month] << " " << dateobject.day <<", " << dateobject.year << " (US Expanded) \n";
                                cout << dateobject.day << " " << month[dateobject.month] << " " << dateobject.year<< " (US Military) \n";
                                if(dateobject.month < 10)
                                {
                                    cout<< dateobject.year << "-0" << dateobject.month <<"-" <<dateobject.day<< " (International) \n";

                                }
                            }
                        }
                        else{
                            if(dateobject.month == 2 && dateobject.day > 29)
                            {
                                cout <<"Date: " << dateInput << " is Invalid \n";
                            }
                            else if(dateobject.day > 30){
                                cout <<"Date: " << dateInput << " is Invalid \n";

                            }
                            else{
                                cout<< dateInput << "(US) \n";
                                cout<< month[dateobject.month] << " " << dateobject.day <<", " << dateobject.year << " (US Expanded) \n";
                                cout << dateobject.day << " " << month[dateobject.month] << " " << dateobject.year<< " (US Military) \n";
                                if(dateobject.month < 10)
                                {
                                    cout<< dateobject.year << "-0" << dateobject.month <<"-" <<dateobject.day<< " (International) \n";

                                }
                            }
                        }   
                    }
                    
                    
                }
                else{
                    cout << dateobject.year << " -> NOT Leap Year! \n";
                    if(dateobject.month == 2 && dateobject.day > 28)
                    {
                        cout <<"Date: " << dateInput << " is Invalid \n";
                    }
                    else if(dateobject.day < 32 && dateobject.month < 13)
                    {
                        if(dateobject.month == 1 ||dateobject.month == 3 ||dateobject.month == 5 ||dateobject.month == 7 ||dateobject.month == 8 ||dateobject.month == 10 ||dateobject.month == 12 ){
                            if(dateobject.day > 31){
                                cout <<"Date: " << dateInput << " is Invalid \n";

                            }
                            else{
                                cout<< dateInput << "(US) \n";
                                cout<< month[dateobject.month] << " " << dateobject.day <<", " << dateobject.year << " (US Expanded) \n";
                                cout << dateobject.day << " " << month[dateobject.month] << " " << dateobject.year<< " (US Military) \n";
                                if(dateobject.month < 10)
                                {
                                    cout<< dateobject.year << "-0" << dateobject.month <<"-" <<dateobject.day<< " (International) \n";

                                }
                            }
                        }
                        else{
                            if(dateobject.day > 30){
                                cout <<"Date: " << dateInput << " is Invalid \n";

                            }
                            else{
                                cout<< dateInput << "(US) \n";
                                cout<< month[dateobject.month] << " " << dateobject.day <<", " << dateobject.year << " (US Expanded) \n";
                                cout << dateobject.day << " " << month[dateobject.month] << " " << dateobject.year<< " (US Military) \n";
                                if(dateobject.month < 10)
                                {
                                    cout<< dateobject.year << "-0" << dateobject.month <<"-" <<dateobject.day<< " (International) \n";

                                }
                            }
                        }   
                    }

                }
                }
                
            }
      

    }while(dateInput != "n");
    cout << "Programmer: Seojin Park for CISC 192";
}