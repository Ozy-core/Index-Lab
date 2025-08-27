#include "strextra.h"

int find(string str, char c)
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

int find(string str, string c)
{
    size_t index= str.find(c);

    if (str.find(c))
    {
        return index;
    }
    return -1;
}