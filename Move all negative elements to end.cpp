Q.Move all negative elements to end
link->https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
code-->void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>v;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]= v[i];
        }
        
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
