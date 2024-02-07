Q.Reverse sub array
code-->
   while(l<=r){
	        swap(arr[l-1] , arr[r-1]);
	        l++;
	        r--;
	    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
