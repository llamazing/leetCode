#include <iostream>
using namespace std;


//4的倍数肯定不成功！！！！
//笨成狗了！！
bool canWinNim1(int n) {
	bool *calu = new bool [n+1];
	int i = 0;
	for(;i < n+1; ++i)
	{
		calu[i] = 0;
	}

	calu[1] = 1;
	calu[2] = 1;
	calu[3] = 1;
	if( n <= 0)
	{
		return false;
	}
	for( i =4; i <= n; ++i)
	{
		calu[i] = (!calu[i-1])|| (!calu[i-2])|| (!calu[i-3]);
	}
	return calu[n];
        
}

bool canWinNim(int n) {
	return (n%4);
}
int main()
{
	int i;
	cin>>i;

	if( canWinNim(i))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

	
	return 0;
}