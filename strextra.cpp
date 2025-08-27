#include "strextra.hpp"

namespace strextra
{
    int find(const std::string& s, char c)
    {
        for(int i=0; i< s.length(); i++)
        {
            if(s[i] == c)
            {
                return i;
            }
        }
        return -1;
    }

    int find(const std::string& s, const std::string& c)
    {
        size_t index= s.find(c);

        if (s.find(c))
        {
            return index;
        }
        return -1;
    }
}