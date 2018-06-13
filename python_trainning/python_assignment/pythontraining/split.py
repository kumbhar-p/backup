!/usr/bin/python

import re

string=raw_input()
z=re.split("[.,]*",string)
print z
for i in range(0,len(z)-1):
	if len(z[i])==0:
		z.pop(i)
print z
for i in z:
	print i
