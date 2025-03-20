//ques1->check anagrams
//approach->sorting the strings and then compared
//TC=O(NLOGN)
//SC=O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

    
        return (s==t);

    }
};
//ques->2longest common pefix
// TC : O(n^2) 
//SC : O(1)

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
    
            string prefix = strs[0]; 
    
            for (int i = 1; i < strs.size(); i++) {
                while (strs[i].find(prefix) != 0) { 
                    prefix.pop_back();
                    if (prefix.empty()) return "";
                }
            }
            
            return prefix;
        }
    };
