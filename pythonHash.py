# set
s ={1}
so=set([1,2,3,4])
print(type(so))

s.add(5)
s.discard(1)
s.remove(5)
print(s)


arr1=[1,3,3,6,5]
arr2=[1,2,3,4,5,6,7]
a=1
b=2
print(a | b)    # union
print(a & b)    # intersection
print(a - b)    # difference
print(a ^ b)    # symmetric difference

m={"apple":3,"mango":4}
m2=dict(santra='5')
print(m,m2)