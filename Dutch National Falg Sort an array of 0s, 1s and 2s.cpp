Sort an array of 0s, 1s and 2s
link-->https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
code-->void sort012(int arr[], int n)
    {
        // code here 
        int low =0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low] , arr[mid]);
                    low++;
                    mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid] , arr[high]);
                high--;
            }
        }
    }

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
