# 3. Count Vowels and Consonants

def vowels_and_consonants(s):
    vowels ='aeiouAEIOU'
    vowel_count=0
    cons_count=0

    for i in s:
        if i.isalpha():
            if i in vowels:
                vowel_count+=1
            else:
                cons_count+=1
    return vowel_count,cons_count

s = "Aayushwew"
print(vowels_and_consonants(s))