#include <iostream>
#include <string.h>
#include <fstream>



using namespace std;

int main()
{
    string input;
    double rainfall[12];
    double total;
    double average;
    double temp;    
    string a;
    do{

        cout << "The program reads rainfall values for each of the 12 months in a year,\n";
        cout << "from an external text file starting with January and ending with December, \n";
        cout << " into an array of doubles. The program then calculates and displays it on the screen \n";
        cout <<"the total rainfall for the year, the average monthly rainfall, \n";
        cout <<" and the months with the highest and lowest amounts. \n";
        cout << "The read-in values and their intended months were displayed at the end \n";
        cout <<"with a note of largest or smallest next to the corresponding value). \n";
        cout <<"The name of the text file must be entered at the runtime \n";
        cout << "";

        cout<<"Enter the filename for rainfall data (or -1 to quit): ";

        getline(cin >> ws, input);
        ifstream myfile(input);

         if(myfile.is_open())
            {
                
                for(int i = 0; i < 12; i++)
                {
                    getline(myfile,a);
                    rainfall[i] = stod(a);
                    total += rainfall[i];

                }
                average = total / 12;
                for(int i = 0; i < 12; i++)
                {
                    for(int j = 1; j < 12; j++)
                    {
                        if(rainfall[j] < rainfall[i])
                        {
                            temp = rainfall[j];
                            rainfall[j] = rainfall[i];
                            rainfall[i] = temp;
                        }
                        else if(rainfall[i] == rainfall[j])
                        {
                            

                        }
                    }
                
                }
                cout << "The total: " << total << "\n";
                cout << "The average: " << average << "\n";
                cout << "The largest: " << rainfall[10] << "\n";
                cout << "The smallest: " << rainfall[0] << "\n";
                for(int i = 0; i < 12; i++)
                {
                    cout << rainfall[i] << "\n";
                    
                }

                



                
              
                
            }

            

            

            


    

    }while(input != "n" && input != "-1");


}