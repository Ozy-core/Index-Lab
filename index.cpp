#include <iostream>
#include <cassert>
#include <string>
#include "strextra.cpp"

using namespace std;



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

    //trying it asserts
    assert(find("where are you", 'a')==6);
    assert(find("come here jesan","jesan")==10);
    assert(find("done",'v')==-1);
    assert(find("basket of apples","jesan")==-1);
}