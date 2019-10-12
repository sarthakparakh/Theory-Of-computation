#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l = s.length();
	int count1 = 0,count0 = 0;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='1')
			count1++;
		else if(s[i]=='0')
			count0++;
	}
	if(count1==count0)
		cout<<"String have equal number of 1's and 0's"<<endl;
	else
		cout<<"String have unequal numbers of 1's and 0's"<<endl;
}
