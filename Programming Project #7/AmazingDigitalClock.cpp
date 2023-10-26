#include <iostream>
#include <string>
#include <fstream>
#include <math.h>       

using namespace std;

int findColumn(string word)
{
    int index = -1;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == ':')
        {
            index = i;
        }
        
    }
    return index;
}
int main(){
    char yn;
    string input;
    char arr[5];
    int meaning;
    int hours;
    int min;
    

    do{
        cout << "Enter a time (HH:MM): ";
        cin >> input;
        hours = stoi(input.substr(0,findColumn(input)));
        min = stoi(input.substr(findColumn(input) + 1));
        if(hours > 12)
        {
            meaning  = 5;
            
            
        }
        else if(findColumn(input) == -1)
        {
                meaning = 5;
        }
        
        else if(min > 59)
        {
            meaning =5;
            
        }
        else{
            for(int i = 0; i < input.size(); i++)
            {
                if(i != findColumn(input))
                {
                    if(i < input.size() - 1)
                    {
                        if(input[i] + 1 == input[i + 1] && input[0] + i - 1 == input[i])
                        {
                            meaning = 2;
                        }
                        else if(input[i] - 1 == input[i+1]&& input[0] - i + 1 == input[i])
                        {
                            meaning = 3;
                        }
                        else{
                            if(input[i] == input[0])
                            {
                                meaning = 1;  

                            }
                            else{
                                meaning = 4;
                            }
                        }
                        
                    }
                }

                
            }
            
        }

       


        if(meaning == 1)
        {
            cout << input << " is a normal time.    -> BINGO! Go to buy a lottery ticket.";

        }
        if(meaning == 2)
        {
            cout << input << " is a normal time.    --> UP! All dreams will come true.";

        }
        if(meaning == 3)
        {
            cout << input << " is a normal time.    -> DOWN! The challenging road is ahead.";

        }
        if(meaning == 4)
        {
            cout << input << " is a normal time.";

        }
        if(meaning == 5)
        {
            cout<< "that is not a real time try again";
        }



        

        

        cout << "\n";
        cout <<"run program again? (y/n) ";
        cin >> yn;


    }while(yn != 'n');
    

    cout << "Programmed by Seojin Park";

    

}