#!/usr/bin/python

"""
	Script : find_file_size.py
	Author : Bhavya
	Date : April-20-2017
	Purpose :To find the size of an existing file using seek() and tell()
			methods
"""
import sys

if len(sys.argv)!=2:
	print "Usage:find_file_size.py <filename>"
	sys.exit(12)

f = open(sys.argv[1])

#Moving to the end of the file

f.seek(0,2)
filesize=f.tell()
print "File size (in bytes):",filesize
