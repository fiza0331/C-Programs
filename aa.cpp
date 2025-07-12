#include<iostream>
using namespace std;
int main()
{
	int i,number,ans;
	ans=0;
	i=0;
	number=0;
	cout<<"Enter the number"<<endl;
	cin>>number;
	for(i=1; i<=number; ++i)
	{
		
		ans+=i*i;
	}
	cout<<"The number of sum of square value is = "<<ans;
}
