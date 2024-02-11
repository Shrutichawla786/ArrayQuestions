Q.Maximum Product Subarray
link-->https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1
code->	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans= INT_MIN;
	    long long  pre=1;
	    long long suff=1;
	    for(int i=0;i<n;i++){
	        if(pre==0){
	            pre=1;
	        }
	        if(suff==0){
	            suff=1;
	        }
	        pre= pre* arr[i];
	        suff= suff*arr[n-i-1];
	        ans = max(ans , max(pre , suff));
	    }
	    return ans;
	}
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
