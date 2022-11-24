#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{	
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
		{
			cout<<"its Prime";
			for(int i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					cout<<i<<endl;
				}
			}
		}
		else 
		{
			cout<<"its Not Prime"<<endl;
			
	}

}



