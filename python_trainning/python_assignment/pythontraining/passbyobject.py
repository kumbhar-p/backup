dict1={10:20,"Sachin":99}
print "dict1 after creation:",dict1
def dcttest(dict2):
	dict2[10]=50
	dict2["Sachin"]+=3
	print "In dcttest function:",dict2

dcttest(dict1)
print "After modification:",dict1
