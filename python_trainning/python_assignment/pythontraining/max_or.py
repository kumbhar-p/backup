l=input()
r=input()

maxi=0

for i in range(l,r+1):
	for j in range(i,r+1):
		if i^j>maxi:
			maxi=i^j

print maxi
