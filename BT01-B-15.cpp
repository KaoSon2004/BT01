#include <iostream>
using namespace std;
int main ()
{

    string a="a";
    string b="b";

    cout<<"f(0) = " <<a<<endl;
    cout <<"f(1) = "<<b<<endl;
    string c;
    for (int i=2;i<=10;i++)
    {
        c=b+a;
        cout<<"f("<<i<<") = " <<c<<endl;
        a=b;
        b=c;


    }
    return 0;
}
