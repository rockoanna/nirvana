#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int banks;
    int loans;
    cin >> banks;
    cin >> loans;

    while(loans != 0){
        vector<int> bank_m(banks+1);
        for(int i = 1; i <= banks; i++){
            cin>>bank_m[i];
        }

        for(int i = 0; i < loans; i++){
            int bank1;
            cin >> bank1;
            int bank2;
            cin >> bank2;
            int val;
            cin >> val;

            bank_m[bank1] -= val;
            bank_m[bank2] += val;
        }

        bool ok = true;
        for(int i = 1; i < bank_m.size(); i++){
            if(bank_m[i] < 0){
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }

        cin >> banks;
        cin >> loans;
    }


    return 0;
}
