class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> frequency_array(105);
        for(int i:nums)
            frequency_array[i]++;
        int unique_sum=0;
        for(int i=0;i<=101;i++){
            if(frequency_array[i]==1)
                unique_sum+=i;
        }
        return unique_sum;
    }
};