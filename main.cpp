
#include<iostream>
using namespace std;
int main()
{
	int i =2001;
	int a,b，c，d;
	while(i<10000)
	{
		int flag =0;
		int c =i;
		while(c > 0)
		{
			a = c %16;
			b = (c-a) /16;
			c = b;
			if(a<10)
			{
				flag =1;
				break;
			}
		}
		if(flag ==0)
		{
			cout<<i<<endl;
			break;
		}
        i++;
	}
	return 0;
}
