#!/usr/bin/python
"""
	Script : stderr_ex.py
	Author : Bhavya
	Date : April-23-2017
	Purpose :Understand the behaviour of 'stderr' file object
"""
import sys

print "Hello World"
print "Welcome to GlobalEdge."
print "Training at the Edge..."

sys.stderr.write('We are all on the Edge..Ready to fall.\n')
sys.stderr.write('Yet another Error Message...\n')

print "Enough for the Day sir!!"
