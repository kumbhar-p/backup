list1=[["Abc",13],["Def",12],["Ghi",17]]
stringlist=""

for i in range(2):
	if list1[i][1]<list1[i+1][1]:
		temp=list1[i][1]
print temp

for i in range(3):
	if temp!=list1[i][1]:
		if temp<list1[i][1]:
			for j in range(3):
				if list1[i][1]<list1[j][1]:
					mini=list1[i][1]
print mini
	
