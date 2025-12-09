class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        int c=0;
        for(int i=0;i<prices.size();i++){
            c=0;
            for(int j=i+1;j<prices.size();j++){
                if(j>i&&prices[j]<=prices[i]){
                    v.push_back(prices[i]-prices[j]);
                    c=1;
                    break;
                }
            }
            if(c==0){
                v.push_back(prices[i]);
            }
        }
        return v;
    }
};