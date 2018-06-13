#!/usr/bin/python

"""
	Script : our_tac.py
	Author : Bhavya
	Date : April-19-2017
	Purpose : TAC command to display contents of file which is given
   	as command line argument in reverse order	python program.
"""

import sys

#checking for the number of arguments passed.
if len(sys.argv)!=2:
	print "Usage:our_tac.py <filename>"
	sys.exit(12)
else:
	f=open(sys.argv[1])
	all_lines=f.readlines()
	all_lines.reverse()
	for line in all_lines:
		print line,


