Q.Max Min
link-->https://www.geeksforgeeks.org/problems/max-min/1
code-->int findSum(int arr[], int n)
    {
    	//code here.
    	int max= arr[0];
    	int min= arr[0];
    	for(int i=0;i<n;i++){
    	    if(arr[i]>max){
    	        max= arr[i];
    	    }
    	    else if(arr[i]<min){
    	        min= arr[i];
    	    }
    	}
    	return (max+min);
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
