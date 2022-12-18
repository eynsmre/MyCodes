# x = y = [1,2,3]
# z = [1,2,3]

# print(x==y)
# print(x==z)
# print(x is y)
# print(x is z) # Ramdeki yerleri aynı mı?

x = [1,2,3]
y = [2,4]
del x[2]
y.reverse()
y[0] = 1
print(x == y)
print(x is y)

x = ['apple','banana']
print('banana' in x)

