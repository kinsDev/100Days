# a list that contains a few kinds of bicycles
bicycles = ['trek', 'cannondale', 'redline', 'specialized']
print(bicycles)

#accessing elemennt in a list
print(bicycles[0])

# modifying an element in a list
print(bicycles[0].title())

# Using Individual Values from a List
message = "I love the " + bicycles[1] + " bicycle model. " + "And I think it is as fast as a " + bicycles[0].title() + "."
print(message)