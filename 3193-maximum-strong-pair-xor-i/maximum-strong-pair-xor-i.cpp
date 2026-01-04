class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi=INT_MIN;
        int x,y;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                x=nums[i];
                y=nums[j];
                if(abs(x-y)<=min(x,y)){
                    cout<<x<<" "<<y<<" ";
                    maxi=max(maxi,x^y);
                }
            }
        }
        return maxi;
    }
};