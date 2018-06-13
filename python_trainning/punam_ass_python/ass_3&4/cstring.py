def lstring(str1, n):
	return str1[n:]
def rstring(str2, n):
	return str2[:n]
def midstring(str3, p, n):
	return str3[p:n]
def rev_str(str4):
	return str4[::-1]

import re
def cnt_indices(str1, str2):
	return [(a.start()) for a in list(re.finditer(str2, str1))]

print "leftmost string"
str1 = raw_input("enter the string : ") 
n = input("enter the value of n leftmost : ")
print lstring(str1, n)

print "\nrightmost string"
str2 = raw_input("enter the string : ") 
n = input("enter the value of n rightmost : ")
print rstring(str2, n)

print "\nmid string"
str2 = raw_input("enter the string : ") 
p = input("enter the value of p: ")
n = input("enter the value of n: ")
print midstring(str2, p, n)

print "\nreverse string"
str4 = raw_input("enter the string :")
print "reversed str : ",rev_str(str4)

print "\ncount of vowels & consonants"
str1 = raw_input("enter the str: ")
vol_str = "aeiouAEIOU"
vol_count = 0
leng = len(str1)
for i in vol_str:
	a = str1.count(i)
	vol_count += a
print "volwels count in string : ", vol_count
print "consonants count in string : ", leng - vol_count

print "\ncnt indices"
print "enter main string : "
str1 = raw_input()
print "enter sub string : "
str2 = raw_input()
print cnt_indices(str1, str2)
