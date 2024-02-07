Q.Find minimum and maximum element in an array
link-->https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
code-->
  pair<long long, long long> getMinMax(long long arr[], int n) {
        // code here
        long long min=arr[0];
        long long max= arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max= arr[i];
            }
            else if(arr[i]<min){
                min=arr[i];
            }
        }
        return {min , max};
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
