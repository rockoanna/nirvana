#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for(int x = 0; x < n; x++){
        int w;
        cin >> w;
        vector<string> voc(w);
        vector<string> voc_not(w);
        vector<string> anagram;
        vector<string> anagram_not;

        for(int y = 0; y < w; y++){
            string s;
            cin >> s;
            voc_not[y] = s;
            sort(s.begin(), s.end());
            voc[y] = s;
        }
        string k;
        cin >> k;
        while(k != "END"){
            anagram_not.push_back(k);
            sort(k.begin(), k.end());
            anagram.push_back(k);
            cin >> k;
        }
        for(int i = 0; i < anagram.size(); i++){
            cout << "Anagrams for: " << anagram_not[i] << '\n';
            int count_ = 0;
            int l = 0;
            for(int j = 0; j < w; j++){
                if(anagram[i] == voc[j]){
                    count_ += 1;
                    cout <<"  "<< count_<< ") " << voc_not[j]<< '\n';
                }else{
                    l += 1;
                }
            }
            if(l == w){
                    cout << "No anagrams for: " << anagram_not[i] << '\n';
                }
        }
      if(x + 1 != n){
        cout << endl;
      }

    }
    return 0;
}
