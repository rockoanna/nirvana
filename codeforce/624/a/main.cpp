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

i64 ans(i64 a, i64 b){
    if(a == b){
        return 0;
    }

    if(a > b){
        if((a - b) % 2 == 0){
            return 1;
        }else{
            return 2;
        }
    }else{
        if((b - a) % 2 == 1){
            return 1;
        }else{
            return 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        i64 a;
        cin >> a;

        i64 b;
        cin >> b;

        cout << ans(a, b) << endl;
    }
    return 0;
}
