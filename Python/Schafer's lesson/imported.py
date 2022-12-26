print("imported")

def find_index(nums, target):
    for i, num in enumerate(nums):
        if num == target:
            return i
    return -1