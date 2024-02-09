Q.Longest Sub-Array with Sum K
link-->https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
code-->int lenOfLongSubarr(int A[],  int N, int k) 
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        map<int , int>presum;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==k){
                maxlen=max(maxlen , i+1);
            }
            int rem = sum-k;
            if(presum.find(rem)!=presum.end()){
                int len = i-presum[rem];
                maxlen=max(maxlen , len);
            }
            if(presum.find(sum)==presum.end()){
                presum[sum]=i;
            }
        }
        return maxlen;
    } 
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
