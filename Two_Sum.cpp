#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return{i,j};
                }
            }
        }
        return {};
    }
};
int main()
{
	Solution a;
	vector<int> v;
	v = {2,7,11,15};
	vector<int> v1;
	v1=a.twoSum(v,9);
    cout<<"Sum Of Elements At  Thses Index Is Equal To Target: ";
	for( int i=0;i<v1.size();i++)
	{
    
		cout<<i<<" " ;
	}
	return 0;
}