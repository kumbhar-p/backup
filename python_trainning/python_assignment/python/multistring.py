#!/usr/bin/python
"""
	Script : 
	Author : Bhavya
	Date : April--2017
	Purpose :
"""

def getmultistr(prompt=''):
	print prompt
	print "enter q to quit:"
	data=''
	while True:
		strng=raw_input()
		if strng in 'q':
			break
		else:
			data+=strng+'\n'
	return data

print getmultistr("enter data")

