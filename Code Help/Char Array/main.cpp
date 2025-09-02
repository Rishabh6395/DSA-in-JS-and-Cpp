#include <iostream>
using namespace std;

// Function to calculate length of char array
int lengOfChar(char lol[])
{
    int count = 0;
    for (int i = 0; lol[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Length of the string is: " << lengOfChar(name) << endl;

    cout << "Your name is: " << name << endl;

    return 0;
}