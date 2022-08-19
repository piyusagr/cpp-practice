//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int t=0;
    	for(int i=0;i<n;i++){
    	    string str = to_string(a[i]),s=str;
    	    reverse(str.begin(),str.end());
    	    if(str.compare(s)==0)
    	      t=1;
    	    else
    	      {t=0;
    	      break;}
    	}
    	return t;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends