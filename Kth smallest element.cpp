Q.Kth smallest element

link-->https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
code->int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr+l , arr+r+1);
        return(arr[k-1]);
    }
  Expected Time Complexity: O(n*log(n) )
Expected Auxiliary Space: O(log(n))
