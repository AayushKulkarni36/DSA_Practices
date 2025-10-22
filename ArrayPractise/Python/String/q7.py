def firstNonrepeatinfchar(s):
    n=len(s)
    unique = {}
    for i in range (n):
        unique[s[i]] = unique.get(s[i],0)+1
    for char in s:
        if(unique[char]==1):
            return char
    return "NULL"
s = "aabb"
print(firstNonrepeatinfchar(s))

    