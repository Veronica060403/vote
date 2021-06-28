#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"\nEnter your age :";
	cin>>age;
	if(age>=18)
		goto e;
	else
		goto n;
	e:cout<<"You are eligible. ";
	n:cout<<"You are not eligible. ";
}
