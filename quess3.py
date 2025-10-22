def count_palidromes(arr):
    count=0
    for word in arr:
        if(word == word[::-1]):
            count+=1
    return count
arr = input("Enter a String with or without palindromes:").split()
ans=count_palidromes(arr)
print(ans)
