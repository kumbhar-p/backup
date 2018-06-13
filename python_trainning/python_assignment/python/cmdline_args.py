#!/usr/bin/python

"""
	Script : cmdline_args.py
	Author : Bhavya
	Date : April-19-2017
	Purpose : Example to illustrate command line arguments python program.
"""

import sys

print "Given command line arguments are as follows:"
for arg in sys.argv[1:]:
	print arg

argc=len(sys.argv)-1

print "No.of command line arguments are:",argc
