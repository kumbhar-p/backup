#!/usr/bin/python
"""
	Script : matrix.py
	Author : Bhavya
	Date : Sept-6-2017
	Purpose :To print transpose of a matrix
"""

m=[(1,2,3),(4,5,6),(7,8,9)]

for rows in m:
	print rows
print "\n"

t_m=zip(*m)

for rows in t_m:
	print rows

