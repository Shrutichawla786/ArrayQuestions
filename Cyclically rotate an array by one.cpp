Q.Cyclically rotate an array by one
link-->https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
code-->vector<int>v;
    v.push_back(arr[n-1]);
    for(int i=0;i<n-1;i++){
        v.push_back(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        arr[i]=v[i];
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
