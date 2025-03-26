// ques->1:Repeated String match
class Solution {
    public:
        int repeatedStringMatch(string a, string b){
            string temp=a;
            int cnt=1;
            int n=b.size();
            while(temp.size()<n){
                temp+=a;
                cnt++;}
            if(temp.find(b)!=string::npos){
                return cnt;}
            temp+=a;
            cnt++;
            if(temp.find(b)!=string::npos){
                return cnt;}
            return -1;
        }
};
// TC:O(a.size*n)
// SC:O(1)
//ques->2 
