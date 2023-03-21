#include <iostream>
using namespace std;

int main()
{
	int a = 0, ent = 0, c = 0, d = 0, i = 0;
	cin >> ent;
	ent = ent / 3; //33
	ent = ent * 3; //99
	
	c = ent; //99
	ent = ent / 3;

	for (i=1;i<=ent;i++) 
	{
		d = d + c;
		c = c - 3;
	}
	cout << d << endl;

	


}
