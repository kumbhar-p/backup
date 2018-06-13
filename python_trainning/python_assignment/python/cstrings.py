#!/usr/bin/python

"""
	Script : cstring.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : Cstring module
"""


def left(string,n):
	"""
		Returns left most characters in a string
	"""
	return string[:n]

#right most characters in a string

def right(string,n):
	"""
		Returns right most characters in a string
	"""
	return string[-n:]

#mid characters from given position in a string

def mid(string,p,n):
	"""
		Returns mid characters in a string from specified position
	"""
	return string[p:p+n]

#reverse of a string

def str_reverse(str1):
	"""
		Returns reverse of a string
	"""
	rev=""
	for char in str1:
		rev = char+rev
	return rev

#Find all indices of substring in a string

def find_all(string,substr):
	"""
		Returns indices of substring in a string
	"""
	index1=[]
	while True:
	 	if len(index1)==0:
	 		ind=string.find(substr)
		else:
			ind=string.find(substr,ind+1)
		if ind==-1:
		 	break
		index1.append(ind)
	return index1

#count vowels in a string

def vowel_count(string):
	"""
		Returns number of vowels in a string
	"""
	vowels="aeiouAEIOU"
	v=0
	for char in string:
		if char in vowels:
			v+=1
	return v

#count consonants in a string

def conso_count(string):
	"""
		Returns number of consonants in a string
	"""
	vowels="aeiouAEIOU"
	c=0
	for char in string:
		if char not in vowels:
			if char.isalpha():
				c+=1
	return c

if __name__=='__main__':
	s=raw_input("enter string:")
	n=int(raw_input("enter number of characters:"))
	p=int(raw_input("enter position:"))
	ss=raw_input("enter substring:")
	print left(s,n)
	print right(s,n)
	print mid(s,p,n)
	print str_reverse(s)
	print find_all(s,ss)
	print vowel_count(s)
	print conso_count(s)
