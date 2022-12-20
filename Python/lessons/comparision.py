#  username , password → database

# a, b, c, d = 5, 5, 10 ,4 

# bool = a == b
# print(bool)

# username = "eynsmre"
# passw = "1234"

# nick = input("Kullanıcı adı: ")
# if(nick != username ):
#     print("wrong nickname")
# else:
#     password = input("Password: ")
#     if(password!=passw):
#         print("wrong password.")
#     else: 
#         print("Welcome!")

############################################
first = int(input("First number: "))
second = int(input("Second number: "))

if(first > second):
    print(first , "is bigger than" , second)
elif(second > first):
    print(first , "is smaller than" , second)
elif(second == first):
    print("They are equal")
else:
    print("Wrong operating")

#alternative

a = int(input("a: "))
b = int(input("b: "))

result = (a>b)
print(f"{a} büyüktür {b}'den: {result}")

# Second problem of 4.4 Sadik Turan


