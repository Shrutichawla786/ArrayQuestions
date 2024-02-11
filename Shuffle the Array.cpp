Q.1470. Shuffle the Array
link-->https://leetcode.com/problems/shuffle-the-array/description/
code--> vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int n1=nums.size();
        int i=0;
        int j=n1/2;
        while(i<n1/2 && j<n1){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
