#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while(n != 0){
        vector<int> v;
        v.reserve(n);
        int max_ = -1;
        for(int i = 0; i < n; i++){
            int count_ = 0;
            string s;
            getline(cin, s);

            for(auto c : s){
                if(c == 'X'){
                    count_ += 1;
                }
            }
            max_ = max(max_, count);
            v.push_back(count_);
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += max_ - v[i];
        }
        cout << ans << '\n';

        cin >> n;
        cin.ignore();
    }
    return 0;
}
