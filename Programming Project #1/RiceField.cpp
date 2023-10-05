// Your First C++ Program

#include <iostream>


using namespace std;

int main() {
    double l = 0;
    double w = 0;
    cout << "Enter Dimensions: \n";

    while(l < 1)
    {
        cout << "Length:";
        cin >> l;
        if(l < 1)
        {
            cout << "Dimensions must be positive!! \n";
        }

    }
    
    while(w < 1)
    {
        cout <<"Width:";
        cin >> w;
        if(w < 1)
        {
            cout << "Dimensions must be positive!! \n";
        }

    }
    

    cout << "Area : " << l * w << "\n";
    cout << "Parameter : " << l * 2 + w * 2 << "\n";
    cout <<"Code written by: Seojin(Chris) Park 8/30/2023";


    return 0;
}

//Code written by: Seojin(Chris) Park 8/30/2023
