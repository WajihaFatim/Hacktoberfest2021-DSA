class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
       int n=a.size();
     
        vector<int>v=a;
        sort(v.begin(),v.end());
        
        vector<int>pm(n); pm[0]=a[0];
        for(int i=1;i<n;i++){
            pm[i]=max(a[i],pm[i-1]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(pm[i]==v[i]) ans++;
        }
        return ans;
    }
  
};

/*https://leetcode.com/problems/max-chunks-to-make-sorted/*/
