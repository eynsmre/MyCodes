import imported
from fibonacci import fibo, test
#create an array of random nums
nums = [1,2,3,4,5,6,7,8,9,10]
target = int(input("Enter a number: "))
index = imported.find_index(nums, target)

if(index == -1):
    print("Not found")
else:
    print("Found at index: ", index)

print(fibo(int(input("Enter the number of fibonacci numbers you want: "))))
print(test)