//ques1->:Square root
//approach->binary search
//code
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int start=0;
        int end=n;
        int fsqrt;
        while(start<=end){
            int mid=start+(end-start)/2;
            int m=mid*mid;
            if(m<=n){
                fsrt=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return fsqrt;
    }
};
//Approach: used binary search to find the square root
//TC:O(log N)
//SC:O(1)

//ques->2:koko eating bananas
//https://leetcode.com/problems/koko-eating-bananas/
class Solution {
    private:
bool possible(vector<int> piles, long long int h,int mid,int n){
 
        long long int giventime=h;
        long long int tooktime=0 ;
        for(long long int i=0;i<n;i++){
            tooktime += (piles[i] + mid - 1) / mid; 
             if (tooktime>giventime )
            return false;
             }
        return true;
     }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     
    int s=1;
    int n=piles.size();
    int e=*max_element(piles.begin(), piles.end());
     int mid=s+(e-s)/2;
     int ans=-1;
    while(s<=e){
         if(possible(piles,h,mid,n)){
           ans=mid;
            e=mid-1;
        }
        else
          {  s=mid+1;}
           mid=s+(e-s)/2;  } 
    return ans;  
    }};
//Approach: used binary search
//TC:O(Nlog (max(piles))
//SC:O(1)



//ques->3 finding smallest divisor
//approach->binary search
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int ans=INT_MAX;
       int i=1;
       while(ans>threshold)
            int count=0;
        for(int j=0;j<nums.size();j++)
        {
          if(nums[j]%i==0) count+=nums[j]/i;
           else  count+=nums[j]/i+1;
         }
         ans=min(ans,count);
         i++;
      } 
       return i-1;
    }
};
//TC:O(Nlog (max(nums))
//SC:O(1)
