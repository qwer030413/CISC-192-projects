#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initializing the main string and target substring
    string s1 = "This is the main string";
    string s2 = "main2";

    // using contains() function, checking if the given substring is present in the main string or not
    int isFound = s1.contains(s2);

    // verifying the result
    if (isFound)
    {
        // printing success message if found
        cout << "Substring Found" << endl;
    }
    else
    {
        // else printing the error message
        cout << "Substring not Found" << endl;
    }

    return 0;
}