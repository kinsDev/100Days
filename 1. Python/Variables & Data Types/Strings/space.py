#tabs and newline

print("Python")
print("\n")

print("\tPython")
print("\n")

print("Languages:\nPython\nC\nJavascript")
print("\n")

print("Languages:\n\tPython\n\tC\n\tJavascript")
print("\n")


#dealing with spaces
favorite_language = " Python"
print(favorite_language) #the extra space remains

print(favorite_language.lstrip()) #the extra space on the left is removed

print(favorite_language) #the extra space comes back as it was temporarily removed

favorite_language = favorite_language.lstrip() #we asign the favorite space value to be the one whose space has been removed on the left
print(favorite_language) #now there is no extra space
print(favorite_language)
print(favorite_language)