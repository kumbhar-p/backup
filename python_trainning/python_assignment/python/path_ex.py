#!/usr/bin/python

"""
	Script : path.py
	Author : Bhavya
	Date : April-17-2017
	Purpose : To Display the list of directories which will be searched
   				for executable files python program.
"""

import os

dir_str = os.environ['PATH']
dir_list = dir_str.split(':')

print "The list of directories that will be searched for executables are:"
for d in dir_list:
	print d

print "Shell Name:",os.environ['SHELL']
print "Home directory:",os.environ['HOME']

for k,v in os.environ.items():
	print k,'=',v
