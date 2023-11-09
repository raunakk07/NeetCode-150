class Solution(object):
    def twoSum(self, nums, target):
        prevMap = {} #value : index
        for i,n in enumerate(nums):
            complement = target - n
            if complement in prevMap:
                return [prevMap[complement], i]
            prevMap[n] = i
        return
        
