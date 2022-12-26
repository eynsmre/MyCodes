def isLeap(year):
    if year % 4 == 0 and year % 100 != 0:
        return True
    elif year % 400 == 0:
        return True
    else:
        return False

 
year = int(input("Enter a year: "))

if isLeap(year):
    print(f"Februray has 29 days in {year}.")
else:
    print(f"Februray has 28 days in {year}.")