#!/usr/bin/python

"""
	Script : inserchat.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose :To insert a character in a string at a particular index
"""

string=raw_input("enter string:")
char=raw_input("enter character:")
index=int(raw_input("enter index:"))

string1=string[0:index]+char+string[index:]
print string1
