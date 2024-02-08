Q.Merge Without Extra Space
link-->https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
code-->        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int index=0;
            long long  arr3[n+m];
            int l=0;
            int r=0;
            while(l<n && r<m){
                if(arr1[l]<=arr2[r]){
                    arr3[index]=arr1[l];
                    index++;
                    l++;
                }
                else{
                    arr3[index++]=arr2[r++];
                }
            }
            while(l<n){
                arr3[index++]=arr1[l++];
            }
            while(r<m){
                arr3[index++]=arr2[r++];
            }
            for(int i=0;i<n+m;i++){
                if(i<n){
                    arr1[i]=arr3[i];
                }
                else{
                    arr2[i-n]=arr3[i];
                }
            }
        } 
Expected Time Complexity:  O((n+m))
Expected Auxilliary Space: O((n+m))
