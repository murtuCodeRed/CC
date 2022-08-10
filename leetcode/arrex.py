
nums=[1,2,3,4]
# final = [1 for _ in range(len(nums))]
final=[1]*len(nums)
left = 1
right = 1

for i in range(len(nums)):
    # final[i] *= left
    # left *= nums[i]
    # print(final)
    final[~i] *= right
    right *= nums[~i]
    print(nums)
    print(final)
    print(right)
    print("\n")
    # print(~i)
# print(final)