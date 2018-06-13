#!/usr/bin/python

"""
	Script : stack.py
	Author : Bhavya
	Date : April-17-2017
	Purpose : Implement the STACK Data Structure menu-driven program python 
			program.With stack operations
			1.Push
			2.Pop
			3.Display
			4.Quit
"""
import os

stack=[]

while True:
	os.system('clear')
	print """**************MENU*****************"
			Stack Operations
			------------------
			1. PUSH

			2. POP

			3. DISPLAY

			4. QUIT	
		"""
	choice = input("enter your choice:\n")
	if choice==1:
		data=(raw_input("enter data:"))
		stack.append(data)
		print "%s element is successfully added"%(data)
	elif choice==2:
		if stack==[]:
			print "no elements in stack to pop"
		else:
			popped=stack.pop()
			print "%s element is successfully popped"%(popped)
	elif choice==3:
		if stack==[]:
			print "No elements in stack"
		else:
			print "Elements in stack are:"
			print stack
	elif choice==4:
		break
	else:
		print "Invalid option"
	
	

	

