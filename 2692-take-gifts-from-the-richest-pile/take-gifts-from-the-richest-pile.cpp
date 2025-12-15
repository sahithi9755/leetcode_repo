class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        sort(gifts.rbegin(),gifts.rend());
        while(k--){
             gifts[0]=floor(sqrt(gifts[0]));
             sort(gifts.rbegin(),gifts.rend());
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};