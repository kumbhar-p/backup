import re

N=input()
list1=[]
for i in range(N):
	list1.append(raw_input())
for i in range(len(list1)):
	if len(list1[i])>10:
		print "no"
	elif re.search("[^0-6a-zA-Z]{1}[0-9]{9}",list1[i]):
		print "yes"
	else:
		print "no"

