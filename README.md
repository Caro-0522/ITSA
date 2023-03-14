# ITSA
## 題目2 英哩轉公里
### 描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

### 程式碼：
```
#include <iostream>  
using namespace std;  
int main()  
{  
    int m1;  
    double m;  
    cin >> m1;  
    m = m1 * 1.6;  
    printf("%.1f", m);  
    cout << endl;  
}  
```

### 程式說明：
一開始先按照題目，英哩設變數(int)、公里設浮點數(double)，然後請使用者輸入(cin>>m1)英哩值，輸入值就會存到m1裡，再將公式寫出變可算出m值，因為題目有要求小數點後一位，就用printf的寫法寫出，後面再加上個換行，這題就完成了。
