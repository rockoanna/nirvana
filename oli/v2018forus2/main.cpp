#include <iostream>

using namespace std;

vector<int> digits(int n)
{
    vector<int> res;
    while(n !=0){
        res.push_back(n % 10);
        n = n / 10;
    }
    int l = res.size();
    for(int i = 0; i < res.size() / 2; i++){
        int tmp = res[i];
        res[i] = res[l - 1 - i];
        res[l - 1 - i]=res[i];
    }
    return res;

}
int main()
{

    cout <<  << endl;
    return 0;
}
