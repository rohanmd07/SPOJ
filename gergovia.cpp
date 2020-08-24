#include <iostream>
#include <bits/stdc++.h>
#define int long long int
#define pair pair<int,int>
using namespace std;

int32_t main() 
{
	// your code goes here
	while(1)
	{
	    int n;
	    cin>>n;
	    if(n==0)
	    {
	        break;
	    }
		int arr[n];
		int ans = 0;
		int i = 0,j = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		while(arr[i]<0 or arr[i]==0) i++;
		while(arr[j]>0 or arr[j]==0) j++;
		
		while(i<n and j<n)
		{
			if(arr[i]>-arr[j])
			{
				ans = ans+(-arr[j])*(abs(i-j));
				arr[i]+=arr[j];
				j++;
				while(arr[j]>0 or arr[j]==0) j++;
			}
			else if(-arr[j]>arr[i])
			{
				ans = ans+arr[i]*(abs(i-j));
				arr[j]+=arr[i];
				i++;
				while(arr[i]<0 or arr[i]==0) i++;
			}
			else
			{
				ans = ans+arr[i]*(abs(i-j));
				j++;
				while(arr[j]>0 or arr[j]==0) j++;
				i++;
				while(arr[i]<0 or arr[i]==0) i++;
			}
		}
		cout<<ans<<"\n"; 
    }
     		
	return 0;
}