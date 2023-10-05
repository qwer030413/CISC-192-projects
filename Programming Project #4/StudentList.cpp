#include <iostream>
#include <string.h>
#include <fstream>



using namespace std;
string topName = "z";
string bottomName = "";
void topStudent(string name)
{
    
        if(name < topName)
        {
            topName = name;

        }

    
    
    
}

void bottomStudent(string name)
{
    if(name > bottomName)
    {
        bottomName = name;
    }
}



int main() {

    int options;
    int numberOfStudents;
    string name;
    string fileName;
    string StudentNames = "";

    do{
        cout << "== * == * == * == * == * == * == * == * == * == * == * == * == \n";
        cout << "How would you like to read in the students' names?\n";
        cout << "(1) Entering names from keyboard\n";
        cout << "(2) Reading names from external file\n";
        cout << "(3) End program\n";
        cout << "== * == * == * == * == * == * == * == * == * == * == * == * == \n";
        cout << "Enter your choice: ";
        cin >> options;

        if(options == 1)
        {
            cout << "Enter a number of students between 5 and 45 inclusive: ";
            cin >>numberOfStudents;

            for(int i = 1; i <= numberOfStudents; i++)
            {
                cout << "Enter the full name of student " << i << ": ";
                getline(cin >> ws, name);
                StudentNames += name + "\n";
                topStudent(name);
                bottomStudent(name);

            }

            cout << "Here is the list of names you have entered: \n";
            cout << StudentNames << "\n";

            cout << "The name at the top: " << topName + "\n";
            cout << "The name at the end: " << bottomName + "\n";
            StudentNames = "";
            topName = "z";
            bottomName = "";


        }
        else if(options == 2)
        {
            cout << "Enter the name of the file: ";
            getline(cin >> ws, fileName);
            ifstream myfile(fileName);
            if(myfile.is_open())
            {
                
                while(myfile.good())
                {
                    getline(myfile,name);
                    StudentNames += name + "\n";
                    bottomStudent(name);
                    topStudent(name);
                    

                }
                cout<< StudentNames;
                
                cout << "The name at the top: " << topName + "\n";
                cout << "The name at the end: " << bottomName + "\n";
                StudentNames = "";
                topName = "z";
                bottomName = "";
                
            }

            
        }
        

    }while(options != 3);

    cout << "Programmer: Chris Park- written for the class CISC 192- C++ Programming.";

}



