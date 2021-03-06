#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct Ts{
    int id;
    string name;
    double strenght;
};

enum class RoFlag{
    BLUE, YELLOW, RED,
};


void print_vector(string  name, vector<int> v)
{
    cout<<name<<": {";
    for(auto e :v)
    {
        cout <<e << ",";
    }
    cout<<"}"<<endl;
}


void print_vectorts(string  name, vector<Ts> v)
{
    cout<<name<<": {";
    for(auto e :v)
    {
        cout <<e.id << ",";
    }
    cout<<"}"<<endl;
}





int main()
{
    RoFlag rf = RoFlag::RED;
    vector<int> a;
    print_vector("a",a);
    vector<int> b(10);
    print_vector("b",b);
    vector<int> c(10,3);
    print_vector("c",c);
    vector<int> d{1,2,3};
    print_vector("d",d);

    map<int,int> m{ {1,1}, {7,19}, {2, 23}};
    pair<int,int> p = {15,16};
    m.insert(p);
    cout<<m[15] <<endl;



    Ts t1{12,"vasile", 1.8};
    cout<<t1.id<<" "<<t1.name << " "<< t1.strenght << endl;



}
