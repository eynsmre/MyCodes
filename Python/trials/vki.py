# Ask the user for their weight and height
weight = float(input("Enter your weight (in kilograms): "))
height = float(input("Enter your height (in meters): "))

# Calculate the BMI using the formula: BMI = weight / (height * height)
bmi = weight / (height * height)

# Print the BMI to the user
print("Your BMI is: " + str(bmi))