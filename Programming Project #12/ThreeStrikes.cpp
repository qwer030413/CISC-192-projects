#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       
#include <bits/stdc++.h>
#include <cctype>
#include <cstdlib> 
#include <ctime>

using namespace std;
class game{
    public:
        
        string price = "aaaaa";
        string dup = price;
        int index;
        int strikes = 0;
        int digits = 0;
        
        
        void setIndex(){
            do{
                srand ( time(NULL) );
                index = rand() % price.size();
            }while(dup[index] == 'x');
        }
        int getIndex(){
            
            return index;
        }
        void reset(){
            int random[10] = {0};
            int dg = 0;
            srand ( time(NULL) );

            
            do{
                int num = rand() %  10;
                
                if(random[num] != 1)
                {
                    price[dg] = to_string(num)[0];
                    dup[dg] = price[dg];
                    dg++;
                }
                
                random[num] = 1;
            }while(dg < 5);
            price += "aaa";
            strikes = 0;
            digits = 0;
        }
        bool strike(){  
            if(index> -1 && index < 5){
                return false;
            }
            else{
                strikes++;
                price.erase(price.size() - 1);
                return true;
            }
        
        }
        char getDigit()
        {
            return price[index];
        }



};

int main(){
    char input;
    int index;
    
    string panel = "Panel: $";
    bool p[5];
    int position;
    
    
    
    do{
        game g;
        for(int i = 0; i < 5; i++)
        {
            p[i] = false;
        }
        
        cout << "*********** Welcome to Three Strikes Game *********** \n";
        cout << "Pick a chip from a bag, the chip will contain \n";
        cout << "a digit or a strike, if it's a digit then guess \n";
        cout << "which position it belongs to the car's price \n";
        cout <<"\n";
        cout << "PANEL   : _ _ _ _ _ <- this is the 4th position \n";
        cout << "POSITION: 0 1 2 3 4 \n";
        cout << "Accumulating three strikes will result in losing the game. \n";\
        cout << "~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~ \n";
        g.reset();
        cout << "The price must be hidden: $" << g.price.substr(0,5) << "\n";
        do{
            cout << "~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~-^-~ \n";
            cout << "Enter 'p' to pick a chip, or any other key to quit the game: ";
            cin >> input;
            if(input != 'p')
            {
                break;
            }
            cout<<"Strikes hit: "<< g.strikes << "\n";
            cout<<"Digits placed: "<< g.digits<< "\n";
            for(int i = 0; i < 5; i++)
            {
                if(p[i]){
                    panel += g.price[i];
                }
                else{
                    panel += "_";
                }
            }
            cout << panel << "\n";
            panel = "Panel: $";
            cout << "POSITION: 01234 \n";
            cout<<g.price <<"\n";
            cout<<g.dup;
            
            cout<<"\n";
            
            
            g.setIndex();
            if(!g.strike()){
                cout << "You picked the digit: " << g.getDigit() << "\n";
                cout <<"which position do you think it is? ";
                cin >> position;
                if(g.price[g.index] == g.price[position])
                {
                    cout<< "correct yay \n";
                    g.digits++;
                    p[position] = true;
                    g.dup[g.index] = 'x';
                }
                else{
                    cout << "wrong :( \n";
                }
                if(g.digits == 5)
                {
                    cout << "congrats you won rahh \n";
                    cout <<"the price of the car was: $" + g.price.substr(0,5) << "\n";
                    break;
                }
                
            }
            else{
                cout << "You picked a strike!! \n";
                if(g.strikes == 3)
                {
                    cout << "You lost \n";
                    cout <<"the price of the car was: $" + g.price.substr(0,5) << "\n";
                    break;
                }


            }
        }while(input =='p');
        
        


        

    }while(input == 'p');
    
cout << "Programmed by chris park for cisc 192";
}
