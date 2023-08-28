# Using the range() Function
for value in range(0, 6):
    print(value)

# Using range() to Make a List of Numbers
numbers = list(range(1, 6))
print(numbers)

# list the even numbers between 1 and 10
numbers = list(range(2, 11, 2)) # start from 2 - 10, add 2 as you go through the range
print(numbers)

# putting the first 10 square numbers in a list
numbers = []
for value in range(1, 11):
    square = value ** 2
    numbers.append(square)
print(numbers)
# we start with an empty list called numbers
# we loop through each value from 1 to 10
# inside the loop every value is squared and placed at a variable called square
# we append each square to the empty list of numbers
# and then print out the list called numbers

square = []
for value in range(1, 11):
    square.append(value ** 2)
print(square)


# Simple Statistics with a List of Numbers
digits = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
min(digits)
max(digits)
sum(digits)