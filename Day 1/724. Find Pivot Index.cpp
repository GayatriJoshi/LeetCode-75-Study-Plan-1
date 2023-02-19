class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int lsum=0;
        for(int j=0;j<nums.size();j++)
        {
            sum=sum+nums[j];
        }
        int rsum=sum;
        for(int i=0;i<nums.size();i++)
        {
            rsum-=nums[i];
            if(rsum==lsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};
