#include <iostream>  
using namespace std;

int main()
{
    int n, a, ans;
    cin >> n;
    ans = 1;
    a = 2;
    while (a < n)
    {
        if (n % a == 0)
        {
            ans = 0;
        }
        a++;
    }
    if (ans == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}