class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int right=k-1;
        int c=0;
        int maxi=0;
        for(int i=0;i<=right;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c+=1;
            }
        }
        maxi=c;
        while(right<s.size()-1){
            right++;
            if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u'){
                c+=1;
            }
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
                c-=1;
            }
            maxi=max(maxi,c);
            left++;
        }
        return maxi;
    }
};