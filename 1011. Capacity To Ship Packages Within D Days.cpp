#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
bool check(vector<int>& weights,int mid,int days)
        {
            int current_weight=0,d=1;
            for(auto i:weights)
            {
                if(current_weight+i<=mid)
                {
                    current_weight+=i;
                }
                else
                {
                    d++;
                    current_weight=i;
                }
            }
            if(d<=days)
            {
                return true;
            }
             return false;
        }

     int shipWithinDays(vector<int>& weights, int days) {

        int low_weight=INT_MIN;
        int max_weight=0;
        int i,mid,ans;
        int len=weights.size();
        for(i=0;i<len;i++)
        {
            low_weight=max(low_weight,weights[i]);
            max_weight+=weights[i];
        }

        
        while(low_weight<=max_weight)
        {
            mid=(low_weight+max_weight)/2;
            if(check(weights,mid,days)==true)
            {
                 ans=mid;
                max_weight=mid-1;
            }
            else
            {
                low_weight=mid+1;
            }

        }
        return ans;

     }

;


int main()
{
	int result;
	Solution A;
	vector<int> weights={1,2,3,4,5,6,7,8,9,10};
	result=A.shipWithinDays(weights,5);
	cout<<result;
	return 0;
}
