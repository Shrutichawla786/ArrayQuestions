Q.Longest Sub-Array with Sum K

link-->https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
code->int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        int left =0;
        int right=0;
        int maxlen=0;
        int sum=A[0];
        while(right<N){
            while(sum>k && left<=right){
                sum-=A[left];
                left++;
            }
            if(sum==k){
                maxlen=max(maxlen , right-left+1);
            }
            right++;
            if(right<N){
                sum = sum+A[right];
            }
            
        }
        return maxlen;
    } 
    
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
