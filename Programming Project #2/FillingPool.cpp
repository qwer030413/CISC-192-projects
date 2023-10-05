#include <iostream>


using namespace std;




int main() {

    double length, width, depth;
    double pVolume, wVolume, cost;
    cout << "Enter Dimensions: \n";

    
    
        cout << "Length:";
        cin >> length;
        cout << "Width:";
        cin >> width;
        cout << "Depth:";
        cin >> depth;
        
        if(length < 0 || width < 0 || depth < 0)
        {
            cout << "Dimensions must be positive!! \n";
        }
        else{
            pVolume = length * width * depth;
            wVolume = length * width * (depth - 0.25);
            cost = wVolume * 0.77 + 100;
                if (depth - 0.25 <= 0)
                {
                    cost = 0;
                    

                }
                

            cout << "Pool's volume: " <<  pVolume << "\n";
            cout <<"Water volume: " << wVolume<< "\n";
            cout <<"cost: " << cost<< "\n";
            cout <<"Code written by: Seojin(Chris) Park 9/8/2023";

        }

    return 0;



}
