#include <bits/stdc++.h>
using namespace std;
#define idfc ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)  
#define ll long long
#define int long long
#define pb push_back
#define mp make_pair

int32_t main()
{
	idfc;
	int n;
	cin>>n;
	vector<string>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	string word1="coding";
	string word2="makes";
	vector<int>a;
	vector<int>b;
	for(int i=0;i<n;i++)
	{
		if(v[i]==word1)
		{
			a.push_back(i);
		}
		if(v[i]==word2)
		{
			b.push_back(i);
		}
	}
	int result=INT_MAX;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	int i=0,j=0;
while(i<a.size() && j<b.size())
{
	if(abs(a[i]-b[j])<result)
	{
		result=abs(a[i]-b[j]);
	}
	if(a[i]>b[j])
	{
		j++;
	}
	else
	{
		i++;
	}
}
cout<<result;
return 0;
}





























































































































































































































































































































