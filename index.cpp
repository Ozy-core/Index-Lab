#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int looking_for(string str, char c)
{
    for(int i=0; i< str.length(); i++)
    {
        if(str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << looking_for("game",'a') << endl;
    cout << looking_for ("game", 'e')<< endl;
    cout << looking_for("game", 'r') <<endl;
}