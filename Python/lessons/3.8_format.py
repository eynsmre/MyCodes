name="Emre"
surname="Erkeleş"

print("His name is {} and surname is {}".format(name,surname))
print("His name is {1} and surname is {0}".format(name,surname))
print("His name is {s} and surname is {n}".format(n=name,s=surname))
print("His name is {} and surname is {} and age is {}".format(name,surname,"20"))
print("His name is {n} and surname is {s} and age is {age}".format(n=name,s=surname,age="20"))
# THIS IS WRONG -> print("His name is {n} and surname is {s} and age is {age}".format(n=name,s=surname,~Here should be a name like age  = ~ "20"))

result = 300/850
print("result {r:1.3}".format(r=result))
print("result {r:1.4}".format(r=result))
print("result {r:7.4}".format(r=result)) # Yazı toplam 7 karakter uzunluğunda olsun.
# THIS IS WRONG -> print("result {}".format(result[:1.3]))

#FSTRING
print(f"His name is {name} and surname is {surname}")
print(name[::-1])

name1, surname1, age1 = "enes", "Ersoy", 22
print(f"His name is {name1} his surname is {surname1} his age is {age1}")

# THIS IS WRONG -> name1[0]="E"
name1 = "EMRE" + name1[1:]
# name1[0] = 'Y' 'str' object does not support item assignment
print(f"His name is {name1} his surname is {surname1} his age is {age1}")

x = "  emre erkeles. 18. computer engineer"
x = x.upper()
print(x)
x = x.lower()
print(x)
x = x.capitalize() #First letter is empty so this couldn't capitalize first letter 
print(x)
x = x.title()
print(x)
x = x.lower()
x = x.strip() # -> only left strip = .lstrip(), only right strip = rstrip()
print(x)
x = x.split()
print(x)
x = ' '.join(x)
print(x)
x = x.split('.')
print(x)
x = ' ---'.join(x)
print(x)

finding = x.find("computer") # -1 means there isn't such a word.
print(finding)

print(x.startswith("E")) # -> Checks if the word starts with letter "E" ( False because it starts with lower e)

x = x.replace('s','ş') # -> makes "s"  "ş"
print(x)

#x=x.center(100)     # -> Put -x- inside of 100 characters.
#print(x)
x=x.center(100,'*')  # -> Put -x- inside of 100 stars.
print(x)

# -> You can find more with googleing " string methods python "
 













