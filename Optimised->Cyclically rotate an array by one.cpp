Q.Cyclically rotate an array by one

link->https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
code-->void rotate(int arr[], int n)
{
    int s=0;
    while(s<n){
        swap(arr[s++] , arr[n-1]);
    }
    
}
 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
