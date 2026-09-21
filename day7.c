nums = list(map(int, input("Enter sorted array elements: ").split()))

left = 0
right = len(nums) - 1

while left < right:
    mid = left + (right - left) // 2

    # Make mid even
    if mid % 2 == 1:
        mid -= 1

    if nums[mid] == nums[mid + 1]:
        left = mid + 2
    else:
        right = mid

print("Single element:", nums[left])
