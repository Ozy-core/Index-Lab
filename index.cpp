#include <iostream>
#include "strextra.hpp"
//#include <cassert>


int main()
{
    // test: looking for characters and not strings
    std::cout << strextra::find("game",'a')<< std::endl;
    std::cout << strextra::find ("game", 'e')<< std::endl;
    std::cout << strextra::find("game", 'r') << std::endl;

    //testing with words
    std::cout << strextra::find("the quick brown fox jumps over the lazy dog", "fox") << std::endl;
    std::cout << strextra::find("The brown apple", "brown") << std::endl;
    std::cout << strextra::find("Im a star and a diva", "fox") << std::endl;

    //trying it asserts
    //assert(strextra::find("come here jesan","jesan") == 10);
    //assert(strextra::find("done",'v') == -1);
    //assert(strextra::find("basket of apples","jesan") == -1);
    return 0;
}