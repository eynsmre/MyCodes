a = [ "apple", "banana"]
b = [ "strawberry", "cherry"]

a = b
b[0] = "grape"

print(a,b)

#Lists are like pointers.

# 3.20

x,y,z = 5,10,20

x, y = y, x
print(x,y,z)

x = 16
x //= 5
print(x)

values = 1,2,3,4

x,y,z,k = values
x,y,*z = values

print(x,y,z)
print(x,y,z[1])

# *z makes z list
