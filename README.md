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
一開始先按照題目，英哩設變數(int)、公里設浮點數(double)，然後請使用者輸入(cin>>m1)英哩值，輸入值就會存到m1裡，再將公式寫出變可算出m值，因為題目有要求小數點後一位，就用printf的寫法寫出，後面再加上個換行，這題就完成了。
