Q.Count pairs with given sum
link-->https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
code-->int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int , int>m;
        int count=0;
        for(int i=0;i<n;i++){
            if(m[k-arr[i]]){
                count+=m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return count;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
