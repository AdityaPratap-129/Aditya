class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,m=0,l=height[0],r=height[height.size()-1];
        int j=height.size()-1,k=0,res=0;
        if(height.size()==2)
        {
            return min(r,l);
        }
    
        while(i<j)
        {
            m=max(height[i],l);
            k=max(height[j],r);
            int u;
            u=min(m,k)*(j-i);
            
            if(u>res)
            {
                res=u;
            }
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
            
            
        }
        return res;
        
    }
};