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

    return 0;
}