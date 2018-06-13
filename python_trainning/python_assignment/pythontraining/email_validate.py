import re

f1=open("email.txt","r")
string=f1.read()
print re.findall("[a-zA-Z0-9_\.]+@[a-zA-Z]+\.com",string)
