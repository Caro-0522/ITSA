# ITSA
## 題目2 英哩轉公里
### 描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

### 程式碼：
ˋˋˋ
#include <iostream>
using namespace std;
int main()
{
    int m1; *設一個變數m1*
    double m; *設一個浮點數m*
    cin >> m1; *輸入一個英里的數值，將數值存到m1*
    m = m1 * 1.6; *公尺＝英哩乘以1.6*
    printf("%.1f", m); **印出來要有小數點後一位**
    cout << endl; *換行*
}
ˋˋˋ
