name = "Emre"
surname = "Erkeles"
age = "20"

print("Adı: " + name + " " + "Soyadı : " + surname + "Yaşı: " + age)

name = "Emre"
surname = "Erkeles"
age = 20

info = "Adı: " + name + " "+ "Soyadı : " + surname + "\n" + "Yaşı: " + str(age)
length = len(info)

print(length)
print(info)
print(info[length-length])
print(info[2:5:2])