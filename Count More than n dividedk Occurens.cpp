Q.Count More than n/k Occurences
link-->https://www.geeksforgeeks.org/problems/count-element-occurences/1
code->int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int , int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>n/k){
                count++;
            }
        }
        return count;
    }
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
