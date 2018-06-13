print "enter the starting num"
start = input()
print "enter the ending num"
end = input()
for arr in range(start, end+1):
	if(arr > 1):
		for a in range(2,arr):
			if(arr % a) == 0:
				break;
		else :
			print arr
				
		

