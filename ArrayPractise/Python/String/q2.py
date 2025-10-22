# // Check if String is Palindrome
string = input("Enter a string: ")
rev = string[::-1]
if string==rev:
    print("true")
else:
    print("false")