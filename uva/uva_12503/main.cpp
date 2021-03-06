#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int nr;
        cin >> nr;
        int pos = 0;
        vector<int>  moves(nr);
        for(int j = 0; j < nr; j++){
            string direct;
            cin >> direct;
            if(direct[0] == 'L'){
                moves[j] = -1;
            }else{
                if(direct[0] == 'R' ){
                    moves[j] = 1;
                }else{
                    cin>>direct; //skips "AS"
                    int ix;
                    cin>>ix; //reads 'I'
                    moves[j] = moves[ix-1];
                }
            }
            pos+=moves[j];
        }
        cout << pos << endl;
    }


    return 0;
}
