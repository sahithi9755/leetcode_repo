class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vowels;
        vector<int>indexes;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vowels.push_back(s[i]);
                indexes.push_back(i);
            }
        }
        reverse(vowels.begin(),vowels.end());
        for(int j=0;j<indexes.size();j++)
        {
            s[indexes[j]]=vowels[j];
        }
        
        // for(int i=0;i<vowels.size();i++){
        //         cout<<vowels[i]<<" ";
        //     }
        // for(int i=0;i<indexes.size();i++){
        //         cout<<indexes[i]<<" ";
        //     }
        return s;
    }
};