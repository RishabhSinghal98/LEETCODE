#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        {
        	if(n==1) return 1;
            
		vector<int> v(n+1,0);
            v[1]=1;
            v[2]=2;
            for(int i=3;i<=n;i++)
            {
                v[i]=v[i-1]+v[i-2];
            }
            return v[n];
            
        }
        
    }
};
int main()
{
	Solution a;
	int n;
	cout<<"Enter The Step Where You Want to reach"<<endl;
	cin>>n;
	 int b=a.climbStairs(n);
	 cout<<"Total Ways To Reach Is "<<b<<endl;
}
