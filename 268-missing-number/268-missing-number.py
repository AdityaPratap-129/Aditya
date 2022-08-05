class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        d=[0]*(n+1)
        for i in nums:
            d[i]+=1
        for i in range(len(d)):
            if d[i]==0:
                return i
            
        