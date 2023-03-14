# ITSA
## 題目6 季節判定
### 問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。
### 程式碼：
```
#include <iostream>
using namespace std;

int main()
{
    int m1 = 0;
    cin >> m1;
    switch (m1)
    {
        case 12:
        case 1:
        case 2:
            cout << "Winter" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Spring" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Autumn" << endl;
            break;
    }
    return 0;
}

```
### 程式說明：
一開始先設一個變數，將變數輸入數值後就會跑到下面那一個switch，依照每個月份不同來輸出季節。
