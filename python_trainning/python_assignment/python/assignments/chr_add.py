#!/usr/bin/python

"""
	Script : chr_addr.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose :To print the address of first occurence of character in a string
"""

string=raw_input("enter string")
char=raw_input("enter character")

for i in range(0,len(string)):
	if char in string:
		print id(string[i])
		break

