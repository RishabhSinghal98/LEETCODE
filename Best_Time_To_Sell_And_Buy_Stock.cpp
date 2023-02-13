#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int buy_price=prices[0];
        int profit=0,max_profit=0;
        for(int i=1;i<len;i++)
        {
            if(prices[i]<buy_price){
                buy_price=prices[i];
            }
            else 
            {
                profit=prices[i]-buy_price;
                max_profit=max(profit,max_profit);
            }
            
        }
        return max_profit;
       
    }
};
int main()
{
	Solution a;
	int profit;
	vector<int> v{7,1,2,6,8};
	profit=a.maxProfit(v);
	cout<<"Your Profit Is :-"<<profit;
	return 0;
}