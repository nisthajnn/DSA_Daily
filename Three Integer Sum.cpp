// Brute force-(with duplicates) use set to avoid duplicates 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>>ans;
        vector<int>res;
        for(int i=0 ; i<nums.size()-1 ; i++)
        {
            for(int j=i+1 ; j<nums.size()-1 ; j++)
            {
                for(int k=j+1 ; k<nums.size()-1 ; k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                       ans.push_back({nums[i],nums[j],nums[k]});
                     
                    }
                }
            }
        }    
       
        return ans;
    }
};


// optimized-
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr)
     {
        sort(arr.begin(),arr.end());
         vector<vector<int>>ans;
       
      
        for(int i=0 ; i<arr.size()-1 ; i++)
        {
            if(i>0 and arr[i]==arr[i-1])
            continue;
            int j=i+1 ; 
            int k=arr.size()-1;
        while(j<k)
        {
            if(arr[i]+arr[j]+arr[k]==0)
            {
               ans.push_back({arr[i],arr[j],arr[k]});
              
               while( j<k and arr[j]==arr[j+1])
            j++;
            while(j<k and arr[k]==arr[k-1])
            
            k--;
            j++;
               k--;
            }
            
            else if(arr[i]+arr[j]+arr[k]<0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        }
        return ans;
    }
};
