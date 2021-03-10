#include <iostream>
using namespace std;
int main ()
{
    int day,month,year;
    cin >>day>>month>>year;
    int JMD;
    JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
     (365 * (year + 4800 - ((14 - month) / 12))) +
     ((year + 4800 - ((14 - month) / 12)) / 4) -
    ((year + 4800 - ((14 - month) / 12)) / 100) +

    ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;
    switch (JMD)
    {
    case 0:
        cout <<"Monday"<<endl;break;
    case 1:
        cout <<"Tuesday"<<endl;break;

    case 2:
        cout <<"Wednesday"<<endl;break;
    case 3:
        cout <<"Thursday"<<endl;break;
    case 4:
        cout <<"Friday"<<endl;break;
    case 5:
        cout <<"Saturday"<<endl;break;
    case 6:
        cout <<"Sunday"<<endl;break;

    }
    return 0;
}

