//ques1:Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums.
//If target exists, then return its index. Otherwise, return -1
//approach->binary search
//TC=O(LOGN)
//SC=0(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }

};

//ques->2->Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
//TC=O(LOGN)
//SC=0(1)
If target is not found in the array, return [-1, -1].
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high =nums.size();
       vector<int> v={-1,-1};
         while(low<high){
             int mid=(low+high)/2;
             if(nums[0]==target){
            v[0]=0;
         }
             if(nums[mid]>=target){
                high=mid;
                if(nums[mid]==target)
               { v[0]=mid;}
             }else{
                low=mid+1;
             }
         }
         low=0,high =nums.size();
         while(low<high){
            int mid=(low+high)/2;
             if(nums[high-1]==target){
            v[1]=high-1;
         }
             if(nums[mid]<=target){
                low=mid+1;
                if(nums[mid]==target)
               { v[1]=mid;}
             }else{
                high=mid;
             }}
         return v;
    }
};



//ques->3:Given a sorted array of distinct integers and a target value, return the index if the target is found. 
//If not, return the index where it would be if it were inserted in order.
//approach->binary search
//TC=O(LOGN)
//SC=O(1)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size();
       int ans=nums.size();
       while(low<high){
        int mid=(low+high)/2;
          if(nums[mid]>=target){
            ans =mid;
            high=mid;

        }else{
            low=mid+1;
        }
       }
       return ans;
        
    }
};

