#include <iostream>


using namespace std;




int main() {
    int convert;
    int option;

    double value;

    

    do{
    cout << "What would you want to convert? \n";
    cout << "Press 1 for Distance \n";
    cout << "Press 2 for Weight \n";
    cout << "Press 3 for Volume \n";
    cout << "Press 4 for Pressure \n";
    cout << "Press 5 for Tempterature \n";
    cout << "press 6 to quit \n";
    cin >> convert;

    if(convert == 1)
    {
        cout << "Choose an option: \n";
        cout << "Press 1 to convert Inch to Centimeter\n";
        cout << "Press 2 to convert Centimeter to Inch\n";
        cout << "Press 3 to convert Foot to Meter\n";
        cout << "Press 4 to convert Meter to Foot\n";
        cout << "Press 5 to convert Mile to Kilometer \n";
        cout << "Press 6 to convert Kilometer to Mile\n";
        cout << "Press 7 to go back to menu\n";
        cin >> option;
        
        switch(option){
        
        case 1:
            cout <<"enter value in Inches: ";
            cin >> value;
            if(value >= 0)
            {
                 cout << value << " Inches = " << value * 2.54 << "cm \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
           

            break;
        case 2:
            cout <<"enter value in Centimeters: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Centimeters = " << value / 2.54 << " Inches \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            
            break;
        case 3:
            cout <<"enter value in Foot: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Feet = " << value * 0.3048 << "M \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            
            break;
        case 4:
            cout <<"enter value in Meters: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Meters = " << value / 0.3048 << "Ft \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        case 5:
            cout <<"enter value in Miles: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Miles = " << value * 1.609 << "Km \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        case 6:
            cout <<"enter value in Kilometers: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Kilometers = " << value / 1.609 << " Miles \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        case 7:
            break;

        } 
    }
    else if(convert == 2)
    {
        cout << "Choose an option: \n";
        cout << "Press 1 to convert Ounces to Grams \n";
        cout << "Press 2 to convert Grams to Ounces\n";
        cout << "Press 3 to convert Pounds to Kilograms\n";
        cout << "Press 4 to convert Kilograms to Pounds\n";
        cout << "Press 5 to go back to menu \n";
        cin >> option;
        
        switch(option){
        
        case 1:
            cout <<"enter value in Ounces: ";
            cin >> value;
            if(value >= 0)
            {
                 cout << value << " Ounces = " << value * 28.349 << "g \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
           

            break;
        case 2:
            cout <<"enter value in Grams: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Grams = " << value / 28.349 << " Ounces \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            
            break;
        case 3:
            cout <<"enter value in Pounds: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Pounds = " << value * 0.453 << "Kg \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            
            break;
        case 4:
            cout <<"enter value in Kilograms: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Kilograms = " << value / 0.453 << " Pounds \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        
        case 5:
            break;
    }



    }

    else if(convert == 3)
    {
        cout << "Choose an option: \n";
        cout << "Press 1 to convert Ounce to milliliter\n";
        cout << "Press 2 to convert milliliter to Ounce\n";
        cout << "Press 3 to convert Gallon to liter\n";
        cout << "Press 4 to convert liter to Gallon\n";
        cout << "Press 5 to convert Quart to liter \n";
        cout << "Press 6 to convert liter to Quart\n";
        cout << "Press 7 to go back to menu\n";
        cin >> option;
        
        switch(option){
        
        case 1:
            cout <<"enter value in Ounces: ";
            cin >> value;
            if(value >= 0)
            {
                 cout << value << " Ounces = " << value * 29.573 << " milliliters \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
           

            break;
        case 2:
            cout <<"enter value in milliliters: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " milliliters = " << value / 29.573 << " Ounces \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            
            break;
        case 3:
            cout <<"enter value in Gallon: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Gallon = " << value *  3.785 << " liter \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            
            break;
        case 4:
            cout <<"enter value in liter: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " liter = " << value / 3.785 << " Gallon \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        case 5:
            cout <<"enter value in Quart: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " Quart = " << value *  0.946 << " liter \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        case 6:
            cout <<"enter value in liter: ";
            cin >> value;
            if(value >= 0)
            {
                cout << value << " liter = " << value / 0.946 << " Quart \n";
            }
            else{
                cout << "VALUE MUST BE POSITIVE \n";
            }
            break;
        case 7:
            break;

        } 
    }
    else if (convert == 4)
    {
        cout << "Choose an option: \n";
        cout << "Press 1 to convert PSI to Kg/cm \n";
        cout << "Press 2 to convert Kg/cm  to PSI\n";
        cout << "Press 3 to go back to menu\n";
        cin >> option;

        switch (option)
        {
            case 1:
                cout <<"enter value in PSI: ";
                cin >> value;
                if(value >= 0)
                {
                    cout << value << " PSI = " << value * 0.07 << " Kg/cm \n";
                }
                else{
                    cout << "VALUE MUST BE POSITIVE \n";
                }
                break;
                
            
            case 2:
                cout <<"enter value in Kg/cm: ";
                cin >> value;
                if(value >= 0)
                {
                    cout << value << " Kg/cm = " << value / 0.07 << " PSI \n";
                }
                else{
                    cout << "VALUE MUST BE POSITIVE \n";
                }
                break;
            case 3:
                break;



        }

    }

    else if(convert == 5)
    {
        cout << "Choose an option: \n";
        cout << "Press 1 to convert Fahrenheit to Celsius \n";
        cout << "Press 2 to convert Celsius to Fahrenheit\n";
        cout << "Press 3 to go back to menu\n";
        cin >> option;

        switch (option)
        {
            case 1:
                cout <<"enter value in Fahrenheit: ";
                cin >> value;
                cout << value << " Fahrenheit = " <<  (value - 32) * 5 / 9 << " Celsius \n";
                
                
                break;
                
            
            case 2:
                cout <<"enter value in Celsius: ";
                cin >> value;
                cout << value << " Celsius = " << (value*9/5) + 32<< " Fahrenheit \n";
                

                break;
            case 3:
                break;



        }

    }
    

        

    }while (convert != 6);


cout << "Programmed by Chris(Seojin Park)";

}


    
    
    





   




