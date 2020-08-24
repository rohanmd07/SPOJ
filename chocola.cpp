    #include <iostream>
    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    /*bool cmp(int a,int b)
    {
    	return a<b;
    }*/
    int minCost(int X[], int Y[], int m, int n) 
    { 
        int res = 0; 
      
        //  sort the horizontal cost in reverse order 
        sort(X, X + m, greater<int>()); 
      
        //  sort the vertical cost in reverse order 
        sort(Y, Y + n, greater<int>()); 
      
        //  initialize current width as 1 
        int hzntl = 1, vert = 1; 
      
        //  loop untill one or both cost array are processed 
        int i = 0, j = 0; 
        while (i < m && j < n) 
        { 
            if (X[i] > Y[j]) 
            { 
                res += X[i] * vert; 
      
                //  increase current horizontal part count by 1 
                hzntl++; 
                i++; 
            } 
            else
            { 
                res += Y[j] * hzntl; 
      
                //  increase current vertical part count by 1 
                vert++; 
                j++; 
            } 
        } 
      
        // loop for horizontal array, if remains 
        int total = 0; 
        while (i < m) 
            total += X[i++]; 
        res += total * vert; 
      
        // loop for vertical array, if remains 
        total = 0; 
        while (j < n) 
            total += Y[j++]; 
        res += total * hzntl; 
      
        return res; 
    } 
     
     
    int32_t main() 
    {
    	// your code goes here
    	int t;
    	cin>>t;
    	cout<<"\n";
    	while(t--)
    	{
    		int m,n;
    		cin>>m>>n;
    		int row[m-1],col[n-1];
    		for(int i=0;i<m-1;i++)
    		{
    			cin>>row[i];
    		}
    		for(int i=0;i<n-1;i++)
    		{
    			cin>>col[i];
    		}
    		cout<<minCost(row,col,m-1,n-1)<<"\n";
    	}
    	return 0;
    } 

