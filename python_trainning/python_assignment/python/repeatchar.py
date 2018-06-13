#!/usr/bin/python

"""
	Script : repeatchar.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Function which will print the specified character the 
   			specified number of time python program.
"""

def repeat(char='*',num=40):
		print char*num

choice=int(raw_input("""enter your choice:
						1. Enter input
						2. Default
	"""))
if choice==1:
	char=raw_input("enter character:")
	num=int(raw_input("enter number of times the character should repeat:"))
	repeat(char,num)
elif choice==2:
	repeat()

