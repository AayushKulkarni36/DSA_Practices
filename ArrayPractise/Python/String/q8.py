def remOcc(s,part):
    while part in s:
        s=s.replace(part,"")
    return s
s ="daabcabcabcbcb"
print(remOcc(s,"abc"))
    