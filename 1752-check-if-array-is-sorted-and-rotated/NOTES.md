Logic of %size
​
nums = [1,2,3,4]
When 'i' is 0, the current element is 1 and the next element is calculated as (0 + 1) % 4 = 1, which is the same as the current element. In this case, the condition "nums[i] > nums[(i + 1) % nums.size()]" would be false, and the count would not be incremented.
​
When 'i' is 1, the current element is 2 and the next element is calculated as (1 + 1) % 4 = 2, which is the same as the current element. In this case, the condition "nums[i] > nums[(i + 1) % nums.size()]" would be false, and the count would not be incremented.
​
When 'i' is 2, the current element is 3 and the next element is calculated as (2 + 1) % 4 = 3, which is 4. In this case, the condition "nums[i] > nums[(i + 1) % nums.size()]" would be false, and the count would not be incremented.
​
When 'i' is 3, the current element is 4 and the next element is calculated as (3 + 1) % 4 = 0, which is 1. In this case, the condition "nums[i] > nums[(i + 1) % nums.size()]" would be true, and the count would be incremented by 1.
​
Since the count is only incremented once, the function would return 'true', indicating that the vector represents a circular increasing sequence.
​
​
​
​