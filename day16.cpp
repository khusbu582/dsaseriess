// Ques->1  Find Peak Element
// approach : binary search
// TC : O(logn) 
//SC : O(1)

class Solution {
    public:
        int findPeakElement(vector<int>& arr){
            int n = arr.size(), ans = 0;
            if(n == 1 || arr[0]>arr[1]) return 0; 
            else if(arr[n-1]>arr[n-2]) return n-1;
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                return i;
            }
            return -1;
        }
    };
//ques->2 unique character in a string
//code
class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char, int> mp;

        for (auto a : s) mp[a]++;
        for (int i = 0; i < s.size(); i++)
        if(mp[s[i]] == 1)
        return i;

        return -1;
    }
}; 
//Approach: stored the occurance of each character and returned the first character that is unique 
//TC:O(N)
