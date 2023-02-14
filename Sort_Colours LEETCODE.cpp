#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int temp;
        int start=0;
        int len=nums.size();
        int end=len-1;
        int mid=0;
        while(mid<=end)
        {
            
            if(nums[mid]==0)
            
            {
            temp=nums[start];
            nums[start]=nums[mid];
            nums[mid]=temp;
             start++,mid++;
            }
            
            else if(nums[mid]==1)
            {
            mid++;
            }
            
            else
            {
            temp=nums[end];
            nums[end]=nums[mid];
            nums[mid]=temp;
            end--;
            }
           
        }
        
    }
};
int main()
{
	Solution obj;
	int i;
	
	vector<int> v{2,0,2,1,1,0};
	obj.sortColors(v);
	for(i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	return 0;
}
