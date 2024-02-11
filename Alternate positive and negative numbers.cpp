Q.Alternate positive and negative numbers
link-->https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
code-->	void rearrange(int a[], int n) {
	    // code herevecti
	    vector<int>v1;
	    vector<int>v2;
	    for(int i=0;i<n;i++){
	        if(a[i]>=0){
	            v1.push_back(a[i]);
	        }
	        else{
	            v2.push_back(a[i]);
	        }
	    }
	    int i=0;
	    int j=0;
	    int k=0;
	    
	    while(i<v1.size()&& i<v2.size()){
	        a[k++]=v1[i++];
	        a[k++]=v2[j++];
	    } 
	    while(i<v1.size()){
	        a[k++]=v1[i++];
	    }
	    while(j<v2.size()){
	        a[k++]=v2[j++];
	    }
	    
	}
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
