Q.Find Missing And Repeating
link-->https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=2&sortBy=submissions
code->vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int , int> mp;
        int a ;
        int b ;
        
        for(int i=0 ; i<n ; i++){
            mp[arr[i]]++;
        }
        
        for(int i=1 ; i<=n ; i++ ){
            if(mp[i]==2) a=i;
            if(mp[i]==0) b=i;
        }
        
        
        
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
