#6.4 QUESTION ANSWERS

# sayilar =[1,3,5,7,9,12,19,21]

# for sayi in sayilar:
#     print(sayi)

# print("\n")
# i = 0
# while(i<len(sayilar)):
#     print( sayilar[i])
#     i+=1


# bas = int(input("Enter beginning: "))
# bit = int(input("Final: "))

# while(bit >= len(sayilar) or bas > bit):
#     print("Wrong values, enter again.")
#     bas = int(input("Enter beginning: "))
#     bit = int(input("Final: "))

# while(bas<=bit):
#     if(sayilar[bas]%2== 1):
#         print(sayilar[bas])
#     bas+=1

#3

# i = 100
# while(i>1):
#     print(i)
#     i -= 1

#4

# liste = []
# i=0
# while i<5:
#     print("Number", i)
#     num = int(input())
#     liste.append(num)
#     i+=1


# 5

products = []
numOfProducts = int(input("How many product do you want? "))
i = 0
while(i<numOfProducts):
    name = (input("Name of the product: "))
    price = int((input("Price of the product: ")))
    products.append({
        'name': name ,
        'price': price
    })
    i+=1

for product in products:
    print(f'product: {product["name"]},\n price: {product["price"]}')
    



