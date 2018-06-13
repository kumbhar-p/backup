#!/usr/bin/python

"""
	Script : append.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : Enable the user to append contents of sourcefile to the
				target file
"""
import sys

if len(sys.argv)==1 or len(sys.argv)>3:
	print "Usage:append.py [sourcefile]<targetfile>"
	sys.exit(4)

if len(sys.argv)==3:
	f1=open(sys.argv[1],"r")
	f2=open(sys.argv[2],"a")
	f2.seek(0,2)
	print f2.tell()
	all_readlines=f1.readlines()
	f2.writelines(all_readlines)


