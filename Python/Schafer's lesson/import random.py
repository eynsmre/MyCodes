import random
import math

numbers = [random.randint(1, 100) for i in range(10)]
num = random.choice(numbers)
print(num)
print(numbers)

radinal = math.radians(90)

print(radinal)
print(math.sin(radinal))