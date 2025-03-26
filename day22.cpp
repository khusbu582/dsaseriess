// ques->1:
// Link:https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// Code
class Solution{
    public:
        int minAddToMakeValid(string s) {
            int i=0;
            int j=0; 
            for(int k=0;k<s.size();k++){
                char c=s[k];
                if(c=='('){
                    i++;}
                else{
                    if(i>0){
                        i--;}
                    else{
                        j++;}
                }}
        return i+j;}
    };
// TC:O(n)
// SC:O(1)

//ques->2
// Link:https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/
// Code
class Solution {
    public:
        int beautySum(string s) {
            int n=s.size();
            int ans=0; 
            for(int i=0;i<n;i++){
                unordered_map<char, int> mpp;
                for(int j=i;j<n;j++){
                    mpp[s[j]]++;
                    vector<int> freq;
                    for(auto p: mpp){
                        freq.push_back(p.second);}
                    sort(freq.begin(),freq.end());
                    ans+=(freq.back()-freq.front());}}
            return ans;
        }
    };
// TC:O(n*n)
// SC:O(1)
// Approach:Use a frequency map for substring character counts and compute beauty.
