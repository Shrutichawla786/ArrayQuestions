Q.Common elements
link-->https://www.geeksforgeeks.org/problems/common-elements1132/1
code-->vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>v;
            unordered_map<int , int> m1 , m2 , m3;
            for(int i=0;i<n1 ;i++){
                m1[a[i]]++;
            }
            for(int i=0;i<n2 ;i++){
                m2[b[i]]++;
            }
            for(int i=0;i<n3 ;i++){
                m3[c[i]]++;
            }
            for(int i=0;i<n1;i++){
                if(m1[a[i]] && m2[a[i]] && m3[a[i]]){
                    v.push_back(a[i]);
                    m1[a[i]]=0;
                }
                
            }
            return v;
            
        }
Expected Time Complexity: O(n1 + n2 + n3)
Expected Auxiliary Space: O(n1 + n2 + n3)

 
