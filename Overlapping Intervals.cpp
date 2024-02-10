Q.Overlapping Intervals
link-->https://www.geeksforgeeks.org/problems/overlapping-intervals--170633/1
code-->vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         int n= intervals.size();
        sort(intervals.begin() , intervals.end());
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            if(v.empty() || intervals[i][0]> v.back()[1]){
                v.push_back(intervals[i]);
            }
            else{
                v.back()[1]= max(intervals[i][1] ,v.back()[1] );
            }
        }
        return v;
    }
Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(Log(N)) or O(N).
