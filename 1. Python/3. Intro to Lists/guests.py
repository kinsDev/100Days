# list of three people invited to dinner.
invitation = ['kinsley', 'kaimenyi', 'gitonga']
print(invitation)
print('\n')

# invitation message to the list of people
message = "Hello there " + invitation[0] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[1] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[2] + ", I've invited you for a dinner party"
print(message)
print('\n')

# a person that is no longer coming t0 dinner
print("I am so sorry " + invitation[2] + " will not make it")
print('\n')

# guest to replace the person who is no longer coming to dinner
invitation[2] = "Viqie"
print(invitation[2]  + " will replace gitonga for the dinner")
print('\n')

# inviting more guests at the beginning, middle and end of the list of guests
print("Hello " + str(invitation) + " I just found a bigger dinner table")
invitation.insert(0, "mishell")
invitation.insert(2, "skeetah")
invitation.append("mum")
print(invitation)
print('\n')

# a new set of invitation messages
message = "Hello there " + invitation[0] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[1] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[2] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[3] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[4] + ", I've invited you for a dinner party"
print(message)
message = "Hello there " + invitation[5] + ", I've invited you for a dinner party"
print(message)
print('\n')

# I can only invite two people now
print("I am sorry to announce this but, I can only invite two people for dinner")
print('\n')

# removing people, and messaging them
removedguest = invitation.pop()
print("I'm sorry I can't invite you for dinner, " + removedguest)
removedguest = invitation.pop()
print("I'm sorry I can't invite you for dinner, " + removedguest)
removedguest = invitation.pop()
print("I'm sorry I can't invite you for dinner, " + removedguest)
removedguest = invitation.pop()
print("I'm sorry I can't invite you for dinner, " + removedguest)
print('\n')

#alerting the other two people to tell them that they are still invited
print(invitation)
print("You're still invited, " + invitation[0])
print("You're still invited, " + invitation[1])
print('\n')

# using del to remove the last two names from the list
del(invitation[0])
del(invitation[0])
print(invitation)