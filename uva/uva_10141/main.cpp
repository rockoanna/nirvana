#include <string>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_LINE_LEN = 81;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    cin.ignore();
    int rfp_nr = 0;


    while(p != 0)
    {

        rfp_nr += 1;
        if(rfp_nr > 1){
            cout << endl;
        }
        for(int i = 0; i < n; i++)
        {
            cin.ignore(MAX_LINE_LEN, '\n');

        }

        vector<string> prop(p);
        vector<double> price(p);
        vector<int> nr_req(p);
        int count_ = 0;

        while(count_ != p)
        {
            getline(cin, prop[count_]);
            cin >> price [count_];
            cin >> nr_req [count_];
            cin.ignore();
            for(int i = 0; i < nr_req[count_]; i++)
            {
                cin.ignore(MAX_LINE_LEN, '\n');
            }
            count_ += 1;

        }

        int idx = 0;
        int big = nr_req[idx];
        double best_price = price[idx];

        for(int i = 1; i < p; i++)
        {
            if(nr_req[i] > big ||  (nr_req[i] == big && price[i] < best_price))
            {
                idx = i;
                big = nr_req[idx];
                best_price = price[idx];

            }
        }

        cout << "RFP #" << rfp_nr << endl;
        cout << prop[idx]<<endl;

        cin >> n;
        cin >> p;
        cin.ignore();

    }


    return 0;
}
