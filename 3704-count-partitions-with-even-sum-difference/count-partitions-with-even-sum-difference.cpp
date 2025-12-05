class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int>left(nums.size()-1);
        vector<int>right(nums.size()-1);
        int c=0;
        left[0]=nums[0];
        for(int i=1;i<left.size();i++){
            left[i]=left[i-1]+nums[i];
        }
        for(int i=0;i<left.size();i++){
            cout<<left[i]<<endl;
        }
        right[right.size()-1]=nums[nums.size()-1];
        for(int i=right.size()-2;i>=0;i--){
            right[i]=right[i+1]+nums[i+1];
        }
        for(int i=0;i<right.size();i++){
            cout<<right[i]<<endl;
        }
        for(int i=0;i<nums.size()-1;i++){
            if((left[i]-right[i])%2==0){
                c+=1;
            }
        }
        return c;
    }
};