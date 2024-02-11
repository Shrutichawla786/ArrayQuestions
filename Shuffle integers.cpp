Q.Shuffle integers
link-->https://www.geeksforgeeks.org/problems/shuffle-integers2401/1
code-->void shuffleArray(int arr[],int n)
	{
	    // Your code goes here1470. Shuffle the Array
	    vector<int>ans;
        
        int i=0;
        int j=n/2;
        while(i<n/2 && j<n){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j++;
        }
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
	}
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).
