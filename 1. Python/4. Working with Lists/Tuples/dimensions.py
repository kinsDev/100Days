# dimensions of a rectangle that do not really change
dimensions = (200, 50)
print(dimensions[0]) 
print(dimensions[1])
print('\n')


# Looping through all values in a tuple
print("Original dimensions: ")
for dimension in dimensions:
    print(dimension)
print('\n')


# Writing over a tuple
# Although you can’t modify a tuple, you can assign a new value to the variable that holds a tuple
dimensions = (400, 100)
print("Modified dimensions: ")
for dimension in dimensions:
    print(dimension)