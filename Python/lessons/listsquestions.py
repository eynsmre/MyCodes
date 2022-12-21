arabalar= ("BMW","OPEL","MERCEDES","MAZDA")
arabalar=list(arabalar)
# print(len(list1))

# print(list1[0])
# print(list1[3])

# list1 = list1[3].replace("MAZDA","TOYOTA")   FALSE

arabalar[-1] = "TOYOTA"

result= arabalar
print(result)

isFound= "MERCEDES" in arabalar
print(isFound)

print(arabalar[::-1])

arabalar[-2:] = "Porsche","Lamborghini"
print(arabalar)

arabalar = arabalar + ["AUDI","NISSAN"]
print(arabalar)

del arabalar[-1]

print(arabalar)

arabalar.pop(-1)

print(arabalar)