class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long last=0;
        long long c=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]-prices[i]==1){
                c++;
            }
            else{
                last+=(c*(c+1)/2);
                c=1;
            }
        }
        return last+(c*(c+1)/2);
    }
};