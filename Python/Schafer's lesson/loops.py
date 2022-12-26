nums = [1,2,3,4,5,6,7,8,9,10]

for num in enumerate(nums):
    print(num)

for i, num in enumerate(nums):
    print(num)

for i, num in enumerate(nums):
    if num == 7:
        print(f'index of {num} is: ', i+1)
        break

for i,num in enumerate(nums):
    if num == 3:
        print("Found")
        continue # don't make after this line and continue to next iteration
    print(num)   

for num in nums:
    for letter in 'abc':
        print(num, letter)