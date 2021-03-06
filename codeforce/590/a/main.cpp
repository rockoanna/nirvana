#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <array>
#include <map>
#include <cmath>

using namespace std;

typedef int64_t i64;
typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;
typedef string st;
typedef stringstream ss;

typedef double db;

typedef vector<i64> vl;
typedef vector<i32> vi;
typedef vector<char> vc;
typedef vector<db> vd;
typedef vector<st> vs;

typedef map<st,i32> st2i;
typedef map<st,i64> st2l;
typedef map<st,db> st2d;

typedef map<i64,i64> l2l;
typedef map<i64,i32> l2i;

typedef map<i32,i32> i2i;
typedef map<i32,i64> i2l;

int main()
{
    int n;
    cin >> n;
    for(int x = 0; x < n; x++)
    {
        int q;
        cin >> q;
        int sum = 0;
        for(int i = 0; i < q; i++)
        {
            int y;
            cin >> y;
            sum += y;
        }

        if(sum % q == 0)
        {
            cout << sum / q << endl;
        }
        else
        {
            cout << sum / q + 1 << endl;
        }

    }

    return 0;
}
