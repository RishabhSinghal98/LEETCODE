#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int len=nums.size();
        int majority;
        majority=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {

            if(count==0)
            {
            majority=nums[i];
            count++;
            }
             else if(nums[i]==majority)
                {
                    count++;
                    majority=nums[i];
                }
                else{
                    count--;
                }
                
        }
            
        
        return majority;
        
    }
};
int main()
{
	vector<int> v{1,2,2,1,2,2,1};
	Solution b;
	int a;
	a=b.majorityElement(v);
	cout<<a;
	return 0;
}