# // 4. Remove Duplicate Characters

def remDuplicates(s):
    seen =set()
    result=[]
    for char in s:
        if char not in seen:
            seen.add(char)
            result.append(char)
    ans =''.join(result)
    return ans
string = "programming"
print(remDuplicates(string))        