#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int i1;
        cin >> i1;
        int i2;
        cin >> i2;
        int i3;
        cin >> i3;

        vector<int> s;
        s.push_back(i1);
        s.push_back(i2);
        s.push_back(i3);

        sort(s.begin(), s.end());
        cout << "Case " << i <<": " << s[1] << endl;
        printf("Case %d: %d",i ,s[i]);

    }
    return 0;
}
