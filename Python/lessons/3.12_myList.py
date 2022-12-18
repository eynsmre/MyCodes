
myList=[0,1,2]
print(myList)

myList=["one","two","three"]

userOne=["Emre","Erkeles",20]
userTwo=["Ziya Yavuz","Erkeles",7]
users = userOne + userTwo
print(users)

result = "Emre" in userOne
print(result)
result = "emre" in userOne
print(result)

userTwo.append("Hüsnü Ciner İlkokulu")
print(userTwo)
userTwo.insert(-1,"Gözlük Takıyor")
print(userTwo)
userTwo.pop(-2)
print(userTwo)
userTwo.remove("Hüsnü Ciner İlkokulu")
print(userTwo)

numbers = [7,4,8,5,4,1,11,24,35,26,23]
numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)

letters = ["f","e","d","c","b","a"]
letters.sort()
print(letters)

# tuple doesn't support item assignment, list does. 