#include <iostream>
#include <cassert>
#include <string>

using namespace std;

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

int main()
{
    // test: looking for characters and not strings
    cout << find("game",'a') << endl;
    cout << find ("game", 'e')<< endl;
    cout << find("game", 'r') <<endl;
    //testing with words

    cout << find("the quick brown fox jumps over the lazy dog", "fox") << endl;
    cout << find("The brown apple", "brown") << endl;
    cout << find("Im a star and a diva", "fox") << endl;

}