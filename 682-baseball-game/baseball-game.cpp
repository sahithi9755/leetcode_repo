class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(string i:operations){
            int n=ans.size();
            if(i=="+"){
                int n=ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else if(i=="D"){
                ans.push_back(ans[n-1]*2);
            }
            else if(i=="C"){
                ans.pop_back();
            }
            else{
                ans.push_back(stoi(i));
            }
        }
        int sum=0;
        for(int val:ans){
            sum+=val;
        }
        return sum;
    }
};