#include <bits/stdc++.h>

using namespace std;

#define g0 get<0>
#define g1 get<1>

typedef int64_t i64;
typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;
typedef string st;
typedef stringstream ss;

typedef double db;

typedef vector<i64> vi6;
typedef vector<u64> vu6;
typedef vector<i32> vi3;
typedef vector<u32> vu3;
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

#define DEBUG

#ifdef DEBUG
#define dbg(var) {cerr << __LINE__ <<": "<< #var <<" = "<< var << std::endl;}
#else
#define dbg(var)
#endif


inline ss in_line()
{
    st line;
    getline(cin, line);
    return ss(line);
}


int main()
{
    ios::sync_with_stdio(false);

    u64 t;
    cin >> t;

    for(u64 tt = 0; tt < t; tt++)
    {
        u64 n;
        cin >> n;

        u64 nr = n / 2;

        u64 se = nr * (nr + 1);
        u64 so = nr * (nr - 1) + nr;

        if(((se - so) + ((nr - 1) * 2 + 1)) % 2 == 1)
        {
            cout << "YES" << endl;

            for(u64 i = 2; i <= n; i+=2)
            {
                cout << i << " ";
            }

            for(u64 i = 1; i + 2 < n; i+=2)
            {
                cout << i << " ";
            }

            cout << (se - so) + ((nr - 1) * 2 + 1) << endl;

        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
