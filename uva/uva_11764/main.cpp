#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int wall_nr;
        cin >> wall_nr;
        vector<int>walls(wall_nr);
        for(int j = 0; j < wall_nr; j++){
            cin >> walls[j];
        }
        int high = 0;
        int low = 0;
        for(int j = 1; j < wall_nr; j++){
            if(walls[j-1] < walls[j]){
                high += 1;
            }else{
                if(walls[j-1] > walls[j]){
                    low += 1;
                }
            }
        }

        cout << "Case " <<  i << ": " << high << " " << low << endl;
     }

    return 0;
}
