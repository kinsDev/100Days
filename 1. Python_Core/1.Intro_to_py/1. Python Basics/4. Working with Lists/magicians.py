# Looping through an entire list
magicians = ['kinsley', 'kaimenyi', 'gitonga']
for magician in magicians:
    print(magician.title())
print('\n')
# we are picking elements in the magicians lists and storing it in the magician variable
# and then we are printing out the magician variable


# Doing more work within a for loop
# lets add a message to each magician telling them that they did a good job
magicians = ['john', 'doe', 'monty', 'pep8']
for magician in magicians:
    print(magician.title() + ", wonderful performance today!")
    print("I can't wait to see you next time, " + magician + "\n")# lets add a new second line of message to our magicians


# Doing Something After a for Loop
#  Let’s write a thank you to the group of magicians as a whole, thanking them for putting on an excellent show.
magicians = ['john', 'doe', 'monty', 'pep8']
for magician in magicians:
    print(magician.title() + ", wonderful performance today!")
    print("I can't wait to see you next time, " + magician + "\n")
print("Thank you everyone. That was a great magic show!\n")