string=raw_input("Enter string:")

list1=[]

list1=string.split(' ')
print list1
print len(list1)
for i in range(0,len(list1)):
	print list1[i]
	if list1[i].isalpha():
		list1[i]=list1[i].title()

string1=' '.join(list1)

print string1
