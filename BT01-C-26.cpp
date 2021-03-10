#include <iostream>
using namespace std;
int main ()
{

    int n;
    cin >>n;
    int M[n];
    for (int i=0;i<n;i++)
        cin >>M[i];
    double sum=0;
    for (int i=0;i<n;i++)
        sum+=M[i];
    cout <<sum/n;
    return 0;
}
