class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        dct={}
        sum1=0
        for i in nums:
            if i in dct:
                dct[i]+=1
            else:
                dct[i]=1
        for i in nums:
            if dct[i]==1:
                sum1+=i
        print(dct)        
        return sum1 