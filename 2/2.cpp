#include <iostream>
using namespace std;

int main()
{
    int coin = 0,time1 = 0,time2 = 0,time3 = 0,time4 = 0; 
    int a = 0, b = 0, c = 0, d = 0;

    cin >> time1 >> time2>> time3 >> time4;

    if (time2 > 0) {
        a = 60 - time2;
        b = time3 - time1 - 1;
    }
    if (time2 == 0) {
        b = time3 - time1;
    }
    
    c = a + time4;
    d = c / 30;
    //b = (c * 60) + a + time4;
    if (b != 0 && b >= 4) {
        coin = 120 + 160 + d * 60;
        cout << coin << endl;
        b = 0;
    }
    if (b != 0 && b >= 2) {
        coin = 120 + d * 40;
        cout << coin << endl;
        b = 0;
    }
    if (b != 0 && b < 2) {
        b = b * 60;
        b = b + c;
        b = b / 30;
        coin = b * 30;
        cout << coin << endl;
        b = 0;
    }  
}

