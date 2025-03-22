// ques->1:Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

// Code:
class Solution {
  public:
      int maxDepth(string s) {
          int ans=0;
          int count=0;
          for(int i=0;i<s.size();i++) {
              if(s[i]=='(') {
                  count++;
                  ans=max(ans,count);
              }
              else if(s[i]==')') {
                  count--;
                  
              }
              
          }
          return ans;
      }
  };
  
// TC:O(n)
// SC:O(1)

//ques->2 roman to integer conversion
//approach:if the value of ith char is less than the value of (i+1)th char then we subtract them and then add to the answer 
//tc:O(N)
//sc:O(1)
class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int>m(7);
       m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int ans=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            char ch2=s[i+1];
            if(m[ch]>=m[ch2]){
                ans+=m[ch];
            }
            else if(m[ch]<m[ch2]){
                int num=m[ch2]-m[ch];
                ans+=num;
                i++;
            }
        }
        return ans;
    }
};
