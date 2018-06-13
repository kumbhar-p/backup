def fact(n):
	if n == 1:
		return n
	return n * fact(n - 1)
	
def fibo(n):
	if n <=  1:
		return 1
	return fibo(n - 1) + fibo(n - 2) 

def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b, a%b)

multiple = 0
def lcm(a,b):
	global multiple
    	multiple=multiple+b
    	if((multiple % a == 0) and (multiple % b == 0)):
        	return multiple;
    	else:
        	lcm(a, b)
    	return multiple
print "lcm of num"
a = int(input("Enter first number:"))
b = int(input("Enter second number:"))
if(a>b):
	LCM=lcm(b,a)
else:
    	LCM=lcm(a,b)
print LCM

print "\ngcd of num"
a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
res = gcd(a,b)
print "GCD is: ",res

print "\n fibonacci"
nterms = input("enter the n terms\n")
if nterms <= 0:
	print "enter a +ve num"
else:
	print("Fibonacci sequence: ")
for i in range(nterms):
	print fibo(i),

print "factorial\n"
n = input("\nenter the num to find fact : ")
print "fact of num is :",fact(n)


