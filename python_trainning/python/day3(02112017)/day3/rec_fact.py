def fun1(x):
	if(x == 1) :
		return x	
	else :
		return x  * fun1(x-1)
x = input()
print fun1(x)
