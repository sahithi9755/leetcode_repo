class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int c=capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            if(c>=plants[i]){
                steps+=1;
                c-=plants[i];
            }
            else{
                c=capacity-plants[i];
                steps+=2*i+1;
            }
        }
        return steps;
    }
};