# ITSA
## 題目9 計算正整數被3整除之數值之總和
### 描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

### 程式碼：
```
#include <iostream>
using namespace std;

int main()
{
	int ent = 0, all = 0, a = 0, i = 0;
	cin >> ent;
	ent = ent / 3; //33
	ent = ent * 3; //99
	
	a = ent; //99
	ent = ent / 3;

	for (i=1;i<=ent;i++) 
	{
		all = all + a;
		a = a - 3;
	}
	cout << all << endl;
}
```

### 程式說明：
一開始先設變數（ent）為輸入正整數的值  
為了要算出計算的次數  
把ent/3 便能求出次數  
再寫一個for迴圈  
加到算出來的次數  
便能求出結果。
