def myFirstFunction():
    print("Hello World!")

for i in range(4):
    myFirstFunction()

def returnIt():
    return "Hello bro!"

print(returnIt())
print(len(returnIt()))
print(returnIt().upper())

'''
def anotherFunc(greeting, year):
    print(f"{greeting} World! {year}")

anotherFunc(input("Enter a greeting: "), int(input("Enter a year: ")))
'''

def oneMoreFunc(greeting = 'Hello', name = 'World!'):
    print(f"{greeting} {name}")

oneMoreFunc('Dear')

#Here args correspond to the list of arguments and kwargs correspond to the dictionary of arguments
def dicAndList(*args, **kwargs):
    print(args)
    print(kwargs)

dicAndList(1,2,3,4,5,6,7,8,9,10, name = 'John', age = 25)
courses = ['Math', 'Art', 'History']
info = {'name': 'Emre', 'age': 20}
print('\n')
dicAndList(*courses, name = 'John', age = 25)
print("\n")
#dicAndList(*courses, info) -> No star gives empty dictionary to the function
dicAndList(*courses, **info)


#you have to define 'i' if you use while
#no need to do that in for