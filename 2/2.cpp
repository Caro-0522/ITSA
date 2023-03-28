#include <iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    int numh,numm,all;
    cin >> h1 >> m1;
    cin >> h2 >> m2;

    numm = m2 - m1;
    numh = h2 - h1;

    if (numm < 0) {
        numh--;
        numm = 60 + numm;
    }

    if (numh >= 4) {
        int num1 = numh * 60 + numm;
        num1 = num1 - 240;
        all = (num1 / 30) * 60 + 280;
        cout << all;
        
    }

    






}

