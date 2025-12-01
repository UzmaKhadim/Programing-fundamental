#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter an integer:";
	cin>>x;
	cout<<"The number"<<x<<"is"<<(x%2==0? "even":"odd");
	return 0;
	
}
