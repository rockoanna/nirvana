#include <iostream>
#include <string>
#include <set>

using namespace std;

bool is_palindrom(string s )
{
    int len =s.size();
    for(int i = 0; i < len / 2; i++)
    {
        if(s[i] != s[len-i-1])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    string s;
    while(getline(cin, s))
    {
        int len  = s.size();
        set<string> seen;
        int count_ = 0;
        for(int i = 0; i < len; i++)
        {
            for(int j = 1; j <= len - i; j++)
            {
                string  sub = s.substr(i, j);
                if(seen.find(sub) == seen.end() )
                {
                    seen.insert(sub);
                    if(is_palindrom(sub))
                    {
                        count_ += 1;
                    }
                }
            }
        }
        cout<<"The string \'"<< s <<"\' contains "<<count_<<" palindromes.\n";
    }


    return 0;
}
