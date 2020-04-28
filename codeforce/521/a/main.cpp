#include <bits/stdc++.h>

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
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    for(int ii = 0; ii < t; ii++)
    {
        i64 a;
        i64 b;
        cin >> a;
        cin >> b;

        i64 n;
        cin >> n;

        if(n % 2 == 0)
        {
            cout << a * (n / 2) - b * (n / 2) << endl;
        }
        else
        {
            cout << a * (n / 2) - b * (n / 2) + a << endl;
        }
    }

    return 0;
}
