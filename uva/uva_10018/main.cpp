#include <iostream>
#include <fstream>

using namespace std;



long reverse(long n)
{
    long res = 0;

    while(n != 0)
    {
        res = res * 10;
        res += (n % 10);
        n = n / 10;
    }

    return res;
}


int main()
{
    int n;
    cin >> n;
    // ofstream cout {"out.txt"};
    for(int x = 0; x < n; x++)
    {

        long nr;
        cin >> nr;

        int count_ = 0;

        while (reverse(nr) != nr || count_ == 0)
        {
            count_ += 1;
            nr = nr + reverse(nr);
        }

        cout << count_ << " " << nr << '\n';

    }


    return 0;
}
