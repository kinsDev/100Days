#  Use a for loop to print the numbers from 1 to 20, inclusive.
for values in range(1, 21):
    print(values)

#store the printed numbers in a list
values = []
for value in range(1, 21):
    values.append(value)
print(values)

# square of the printed numbers
values = []
for value in range(1, 21):
    values.append(value ** 2)
print(values)


# Make a list of the numbers from one to one million, and then 
# use a for loop to print the numbers. (If the output is taking too long, stop it by 
# pressing ctrl-C or by closing the output window.)
# numbers  = list(range(1, 10000001))
# for number in numbers:
#     print(number)


# Summing a Million: Make a list of the numbers from one to one million, 
# and then use min() and max() to make sure your list actually starts at one and 
# ends at one million. Also, use the sum() function to see how quickly Python can 
# add a million numbers.

figures = list(range(1, 1000001))
print(min(figures))
print(max(figures))
print(sum(figures))


# Odd Numbers: Use the third argument of the range() function to make a list 
# of the odd numbers from 1 to 20. Use a for loop to print each number.
numbers = list(range(1, 21, 2))
for number in numbers:
    print(number)
print('\n')


# Make a list of the multiples of 3 from 3 to 30. Use a for loop to 
# print the numbers in your list.
multiples = list(range(3, 31, 3))
for multiple in multiples:
    print(multiple)