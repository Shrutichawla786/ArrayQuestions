Q.Longest consecutive subsequence
link-->https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
code-->  int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      int count=1;
      int ans=1;
      sort(arr , arr+n);
      for(int i=1;i<n;i++){
          if(arr[i]-arr[i-1]==1){
              count++;
          }
          else if(arr[i]-arr[i-1]==0){
              continue;
          }
          else{
              ans = max(ans , count);
              count=1;
              
          }
      }
      ans = max(ans , count);
      return ans;
    }
Expected Time Complexity: O(nlog n)
Expected Auxiliary Space: O(N).

