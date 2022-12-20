for item in range(10):
    print(item)

for item in range(5,10):
    print(item)

for item in range(10,100,5): #10'dan başla 100'e kadar 5'er sırala
    print(item)

print(list(range(5,100,10))) #5ten başlayan elemanları 10'ar artan liste oluştur

index = 0
greeting = "Hello There"

# for letter in greeting:
#     print(f"index: {index}, letter {letter}")
#     index+=1


for letters in enumerate(greeting):
    print(letters)
    #print(f"index: {index}, letter: {letter}")

#zip

list1= [1,2,3,4,5]
list2=['a','b','c','d','e']
list3=[100,200,300,400,500]

print(list(zip(list1,list2,list3)))
all = list(zip(list1,list2,list3))
print(all)