

    PROBLEMS
    STATUS
    RANKS
    DISCUSS
    CONTESTS
    PROFILE 

    Problems Chocolate My submissions 

    Not hidden submissions All submissions 

ron: submissions
Chocolate
ID 		DATE 	PROBLEM		RESULT 	TIME 	MEM 	LANG
26477478 		2020-08-24 21:52:26 	Chocolate	accepted edit    ideone it 	0.00 	4.6M 	CPP14
26477452 		2020-08-24 21:42:43 	Chocolate	wrong answer edit    ideone it 	0.00 	4.4M 	CPP14
26477448 		2020-08-24 21:42:02 	Chocolate	compilation error edit    ideone it 	- 	- 	CPP14
26477424 		2020-08-24 21:35:34 	Chocolate	wrong answer edit    ideone it 	0.00 	4.6M 	CPP14
26477409 		2020-08-24 21:32:29 	Chocolate	wrong answer edit    ideone it 	0.00 	4.7M 	CPP14
26477407 		2020-08-24 21:31:52 	Chocolate	compilation error edit    ideone it 	- 	- 	CPP14
26477406 		2020-08-24 21:31:29 	Chocolate	compilation error edit    ideone it 	- 	- 	CPP14

Selected submissions:
?
Source code 26477478

SPOJ submission 26477478 (CPP14) plaintext list. Status: AC, problem CHOCOLA, contest SPOJ. By rohannegi (ron), 2020-08-24 21:52:26.

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

Source code | Plain text | Copy to submit
ads via Carbon
Get $100 of free cloud computing. Build and deploy your app with the industry’s leading price-performance.
ads via Carbon

About | Tutorial | Tools | Clusters | Credits | API | Widgets

Legal: Terms of Service | Privacy Policy | GDPR Info
 RSS 
© Spoj.com. All Rights Reserved. Spoj uses Sphere Engine™ © by Sphere Research Labs.
Feedback
Not using Hotjar yet?
Select an element on the page.
