class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(('A'<=s[i]&&s[i]<='Z')||('a'<=s[i]&&s[i]<='z')||('0'<=s[i]&&s[i]<='9')){
                s1 +=tolower((unsigned char)s[i]);
            }
        }
        cout<<s1;
        string s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1==s2){
            return true;
        }
        return false;
    }
};