#print bigest or smallest num
list1 = [8,1,3,2,5,7]
num = list1[0]
for count in list1:
	if(num < count):
		continue
	else :
		num = count

print num

