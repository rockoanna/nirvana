#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    cin >> in;
    int case_ = 1;

    while(in[0] != '*'){
        if(in[0] == 'H'){
            cout << "Case " << case_ << ": " << "Hajj-e-Akbar" << endl;
        }else{
            cout << "Case " << case_ << ": " << "Hajj-e-Asghar" << endl;
        }

        case_ += 1;
        cin >> in;
    }


    return 0;
}
