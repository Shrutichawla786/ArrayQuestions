Q.Longest Sub-Array with Sum K
link-->https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
code-->int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int len=0;
        for(int i=0;i<N;i++){
            int sum=0;
            for(int j=i;j<N;j++){
                sum=sum+A[j];
                if(sum==K){
                    len = max(len , (j-i+1));
                }
            }
            
        }
        return len;
    }
Expected Time Complexity: O(n^2).
Expected Auxiliary Space: O(1).
