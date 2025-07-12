#include<iostream>
using namespace std;
int main()
{
	int salary,deduction,deduction1;
	cout<<"enter the salary"<<endl;
	cin>>salary;
	deduction = salary-1000;
	deduction1=salary-1400;
	switch(salary<10000)
	{
			cout<<"your salary is"<<salary<<endl;
	}
	else
	if(salary>10000&&salary<20000)
	{
		cout<<"your salary is"<<deduction<<endl;
		
	}
	else
	if(salary>=20000)
	{
		cout<<"your salary is"<<deduction1<<endl;
		
	}
}
