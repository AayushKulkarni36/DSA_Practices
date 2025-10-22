# def anagram(s1,s2):
#     if (len(s1) != len(s2)):
#         return False
#     l1=sorted(s1)
#     l2=sorted(s2)
#     return l1==l2

def anagram(s1,s2):
    if (len(s1) != len(s2)):
        return False
    freq={}

    for i in range(len(s1)):
        char1 =s1[i]
        char2= s2[i]
        freq[char1]=freq.get(char1,0)+1
        freq[char2]=freq.get(char2,0)-1
    for value in freq.values():
        if(value!=0):
            return False
    return True

s1="listen"
s2="silent"
if(anagram(s1,s2)):
    print("anagram")
else:
    print("Not anagram")
