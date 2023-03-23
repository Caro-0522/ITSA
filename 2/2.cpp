#include <iostream>
using namespace std;

int main()
{
    int num = 0/*x*/, num1 = 0/*y*/;
    cin >> num >> num1;
    if (num <= 100) {
        if (num1 <= 100) {
            cout << "inside" << endl;
        }
        else {
        cout << "outside" << endl;

        }
    }
    else {
        cout << "outside" << endl;
    }
}
