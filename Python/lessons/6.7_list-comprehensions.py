numbers = []
for number in range(10):
    numbers.append(number)
    print(numbers)

numbers = [x for x in range(10)]
print(numbers)

numbers = [x**2 for x in range(100) if x%3 == 0]
print(numbers) 

myString = 'Hello'
myList = []

# for letter in myString:
#     myList.append(letter)

# print(myList)

myList = [x for x in myString]
print(myList)

years = [1999,2002,1976,1983]
old = [2022-x for x in years ]
print(old)

results = [int(x) if x%2==0 else "TEK" for x in range(1,10)]
print(results)

result = []

for x in range(3):
    for y in range(3):
        result.append((x,y))

numbers = [(x,y) for x in range(3) for y in range(3)]
print(numbers)

