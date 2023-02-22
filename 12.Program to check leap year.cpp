#include<iostream>
using namespace std;
main()
{
	int year;
	cout<<"Enter Year : ";
	cin>>year;
	if(year%4==0)
	cout<<"Year is leap year";
	else
	cout<<"Year is not leap year";
}