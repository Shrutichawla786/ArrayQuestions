Q.Merge Without Extra Space
link->https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
code->void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int l=n-1;
            int r=0;
            while(l>=0 && r<m){
                if(arr1[l]>arr2[r]){
                    swap(arr1[l] , arr2[r]);
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            sort(arr1 , arr1+n);
            sort(arr2 , arr2+m);
        } 
Expected Time Complexity:  O((n+m) log(n+m))
Expected Auxilliary Space: O(1)
