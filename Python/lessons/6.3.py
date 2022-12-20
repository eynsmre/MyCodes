x = 0

while(x<100):
    print(x)
    x+=1

name = '' #False
while not name.strip(): #name'in içinde değer olmadığı sürece
    name = input("isim")

print(f'Merhaba {name}')

#strip baştan ve sondan boşluk siler.
