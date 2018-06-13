list1=[1,"abc",2,"def"]

print "printing whole list"
print list1 #printing whole list

#Print element one by one
print "print element one by one"
for i in list1:
	print i

print "insert 30 at the begining"

list1.insert(0,30)

print list1

print "insert 30 at the end"
list1.append(30)

print list1

print "delete element at position 1"

del list1[0]

print list1

print "delete ele at pos 1 and print deleted ele"
var=list1.pop(0)

print "deleted element:",var
print list1

print "delete element by value"
list1.remove(2)
print list1

print "length:",len(list1)





