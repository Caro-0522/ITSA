# ITSA
## 題目8. 質數判別
### 問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。
### 程式碼：
```
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

```
### 程式說明：
設變數n為輸入的值，當n小於2時，會跳入while迴圈，裡面再寫一個判斷式，判斷是否有餘數，當ans等於1時便印出yes否則印no。
