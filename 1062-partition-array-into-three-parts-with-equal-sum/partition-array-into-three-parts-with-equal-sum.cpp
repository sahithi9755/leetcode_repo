class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        vector<int>v;
        int sum=0;
        int ct=0;
        int c=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int div=sum/3;
        for(int i=0;i<arr.size();i++)
        {
            ct+=arr[i];
            if(ct==div){
                ct=0;
                c+=1;
            }
            if(c==2&&i==arr.size()-1) return false;
            if(c==2){
                int s=0;
                for(int j=i+1;j<arr.size();j++)
                {
                    s+=arr[j];
                }
                if(s==div) return true;
                return false;
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        // if(c==3){
        //     return true;
        // }
        if(c>2&&v[0]==div){
            return true;
        }
        return false;
    }
};