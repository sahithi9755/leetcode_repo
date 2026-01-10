class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
        int left =0;
        int right=0;
        int res=0;
        while(right<s.size()){
            m[s[right]]++;
            while(m[s[right]]>1){
                m[s[left]]--;
                left++;
            }
            res=max(res,right-left+1);
            right++;
        }
        return res;
    }
};