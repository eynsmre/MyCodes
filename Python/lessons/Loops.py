from tkinter import Place


numbers = [1,2,3,4,5]

for a in numbers:
    print(a)

names = ['ziya','zehra','ferhan']

for a in names:
    print(f'My name is {a}')

name = 'Emre Erkeles'

for character in name:
    print(character)

tuple = [(1,2),(1,3),(3,5)]

for a in tuple:
    print(a)

for a,b in tuple:
    print(a,b)

d = {'k1': 1, 'k2':2}
    
for item in d:
    print(item)

for item in d.items():
    print(item)

for key,value in d.items():
    print(key,value)