'''Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]'''

def twoSum(nums, target):
	"""
	:type nums: List[int]
	:type target: int
	:rtype: List[int]
	"""
	found = 0
	idx1= None
	idx2 = None
	for idx1 in range(len(nums)):
		found = 0
		if nums[idx1] > target:
			continue
		else:
			for idx2 in range(idx1+1, len(nums)):
				if (nums[idx1]+nums[idx2] == (target)):
					found =1
					break
		if found==1:
			break
	if (found == 0):
		idx1 = None
		idx2 = None
	return idx1, idx2

if __name__ == '__main__':
	nums = [2, 7, 11, 15]
	target = 17
	i1, i2 = twoSum(nums, target)
	print (i1, i2)