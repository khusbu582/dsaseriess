//day->10
//ques->3 best time to buy and sell stocks
//Approach: assumne first price be minimum 
//  then iterate through for loop and find cost and compare it
// with maxprofit,return the max profit. 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};
//TC=0(N)
//SC=0(1)


//ques->2  Rearrange Elements by Sign

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans(n,0);
            int pos=0;
            int neg=1;
            for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex=negIndex+2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex=posIndex+2;
            }
}
            return ans;
}
};
// TC:O(N)
// SC:O(N)

// Approach: generate a vector name as ans and then one pos
// and then one neg at two consecutive statring index then iterate through
// for loop and check whether the element is less than or greater then 0,
//  if less then put that element to neg and do increment of neg by 2
// or if greater then out that element to pos and do increment of pos by 2.


//ques->2 Next Permutation

class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n=nums.size();
            int indx=-1;
            if(nums.empty()){ return;}
            for(int i=n-2;i>=0;i--){
                if(nums[i]<nums[i+1]){
                    indx=i;
                    break;}}
            if(indx==-1){
                reverse(nums.begin(),nums.end());
                return;}
            for(int i=n-1;i>indx;i--){
                if(nums[indx]<nums[i]){
                    swap(nums[indx],nums[i]);
                    break;}}
            reverse(nums.begin()+indx+1,nums.end());
        }
    };
// TC:O(N)
// SC:O(N)
// Approach:Find the first decreasing element from the right and swap it with the next 
// larger element. Reverse the right part to get the next permutation.


