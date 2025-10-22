# # //Valid Palindrom

# def Palindrome(s):
#     st =0
#     end=len(s)-1
#     while(st<end):
#         if not s[st].isalnum():
#             st+=1
#             continue
#         if not s[end].isalnum():
#             end-=1
#             continue

#         if(s[st].lower()!=s[end].lower()):
#             return False
#         st+=1
#         end-=1
#     return True


def Palindrome(s):
    cleaned = ''.join(c.lower() for c in s if c.isalnum())
    return cleaned==cleaned[::-1]

s="AC3?e3c&a"
print(Palindrome(s))



# Explantion:
# Line 1: cleaned = ''.join(c.lower() for c in s if c.isalnum())
# This line does three things at once - let me break it down from inside out:

# Part 1: for c in s
# Iterates through each character in the string s

# Example: If s = "A man"

# First iteration: c = 'A'

# Second iteration: c = ' '

# Third iteration: c = 'm'

# Fourth iteration: c = 'a'

# Fifth iteration: c = 'n'

# Part 2: if c.isalnum()
# Filter: Only keeps characters that are alphanumeric (letters A-Z, a-z, or digits 0-9)

# Removes spaces, punctuation, special characters

# Example with "A man":

# 'A' → isalnum() = True ✓ (keep it)

# ' ' → isalnum() = False ✗ (skip it)

# 'm' → isalnum() = True ✓ (keep it)

# 'a' → isalnum() = True ✓ (keep it)

# 'n' → isalnum() = True ✓ (keep it)

# Result so far: ['A', 'm', 'a', 'n']

# Part 3: c.lower()
# Transform: Converts each character to lowercase for case-insensitive comparison

# Example:

# 'A' → 'a'

# 'm' → 'm'

# 'a' → 'a'

# 'n' → 'n'

# Result so far: ['a', 'm', 'a', 'n']

# Part 4: ''.join(...)
# Combine: Joins all the filtered and lowercased characters into a single string with no separator (empty string '')

# Result: "aman"