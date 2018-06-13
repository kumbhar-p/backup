print "enter the starting num"
start = input()
print "enter the ending num"
end = input()
for arr in range(start, end):
        for i in range(2,arr):
	    if arr % i == 0:
	        break
    
        else:
	    print arr
                        
				
		

