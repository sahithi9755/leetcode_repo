class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count_zeros=0;
        int count_one=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                count_zeros=0;
                count_one=0;
                for(int l=i;l<=j;l++){
                    if(s[l]=='0'){
                        count_zeros++;
                    }
                    else{
                        count_one++;
                    }
                }
                if(count_zeros<=k||count_one<=k){
                    c+=1;
                }
            }
        }
        return c;
    }
};
