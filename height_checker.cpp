class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> bucket(101,0);
        for(int i:heights)
            bucket[i]++;
        
        int count=0,index=0;
        for(int i=1;i<=100;i++){
            while(bucket[i]>0){
                if(i!=heights[index++])count++;
                bucket[i]--;
            }
        }
        return count;
    }
};