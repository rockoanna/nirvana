#include <iostream>
#include <vector>

using namespace std;

int row(int n)
{
    int r = 0;
    if(n == 1){
        r = 1;
    }else{

        if(n == 2 || n == 3){
            r = 2;
        }else{
            r =
        }
    }


    return r;

}

int solve_one(vector<int> directions)
{
    int ans = 1;
    for(int i = 0; i < directions.size(); i++){
        if(i == 1){
            ans = ans + row(ans);
        }else{
            ans = ans + row(ans) + 1;
        }
    }

    return ans;

}


int main()
{
    return 0;
}
