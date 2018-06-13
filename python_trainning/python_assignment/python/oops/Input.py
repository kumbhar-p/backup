#!/usr/bin/python
"""
	Script : Input.py
	Author : Bhavya
	Date : April-21-2017
	Purpose : 'Input' module which will have custom functions for accept 
			different type of input with valid data.
"""

#Get Integer 
def getinteger(prompt=''):
	"""
		Function for accept integer type of input with valid data.
	"""
	while True:
		string=raw_input(prompt)
		if (string.isdigit()):
			break
		else:
		 	print prompt,"should be valid integer.Enter again"
	return int(string)


#Get FLoat
def getfloat(prompt=''):
	"""
		Function for accept float type of input with valid data.
	"""
	while True:
		try:
			string=float(raw_input(prompt))
			break
		except ValueError:
			print "It is not float.Try again..."
	return string

#Get String
def getstring(prompt=''):
	"""
		Function for accept string type of input with valid data.
	"""
	while True:
		string=raw_input(prompt)
		if string:
			break
		else:
		 	print prompt,"should have string.Enter again"
	return string

#Get Char
def getchar(prompt=''):
	"""
		Function for accepting character input with valid data.
	"""
	while True:
	 	string=raw_input(prompt)
	 	if len(string)==1:
			break
		else:
			print prompt,"should enter only one character"
	return string

#get Yes or No
def getyesno(prompt=''):
	"""
		Function for accepting to get only 'y' for an 'yes' or a 'N' for 'No'
	"""
	while True:
		string=raw_input(prompt)
		if string in "yY" or string in "nN":
			break
		else:
			print prompt,"should enter only Y or y for Yes and N or n for No"
	return string

#get Multi line String
def getmultistr(prompt=''):
	print prompt
	print "enter q to quit"
	data=''
	while True:
		string=raw_input()
		if string in 'q':
			break
		else:
			data+=string+'\n'
	return data

