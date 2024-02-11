Q.268. Missing Number
link->https://leetcode.com/problems/missing-number/description/
code-->int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int range= n*(n+1)/2;
        int sum=0;
       
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
        }
        return (range-sum);
    }
