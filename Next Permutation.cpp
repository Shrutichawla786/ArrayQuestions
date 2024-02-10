Q.Next Permutation
link-->https://www.geeksforgeeks.org/problems/next-permutation5226/1
code-->vector<int> nextPermutation(int n, vector<int> a){
        // code here
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(a.begin() , a.end());
            return a;
        }
        for(int i=n-1;i>ind;i--){
            if(a[i]>a[ind]){
                swap(a[i] ,a[ind]);
                break;
            }
        }
        reverse(a.begin()+ind+1 , a.end());
        return a;
    }
Expected Time Complexity: O( 3N)
Expected Auxiliary Space: O(1)
