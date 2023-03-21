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
