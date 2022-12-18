sayilar = [1,3,5,7,9,12,19,21]

for item in sayilar:
    if(item%3==0):
        print(item)

result = 0

for item in sayilar:
    result +=item

print(f'\nsum of numbers: {result}')

for item in sayilar:
    if(item%2!=0):
        temp = item
        item**=2
        print('square of', temp, item)

sehirler = ['kocaeli','istanbul','ankara','izmir','rize']

for item in sehirler:
    if(len(item)<=5):
        print(item)

urunler = [
    {'name': 'samsung S6', 'price':'3000'},
    {'name': 'samsung S7', 'price':'4000'},
    {'name': 'samsung S8', 'price':'5000'},
    {'name': 'samsung S9', 'price':'6000'},
    {'name': 'samsung S10', 'price':'7000'}
]



# for urun in urunler:
#     print(urun)

sumValue = 0

for urun in urunler:
    sumValue += int(urun['price'])
    
    if(int(urun['price'])<=5000):
        print(urun['name'])

print(sumValue)


#     if(value<=5000):
#         print(key)


