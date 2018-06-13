#!/usr/bin/python

"""
	Script : histogram.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Print histogram python program.
"""
def histogram(l):
	for n in range(0,len(l)):
		if l[n]>0:
			print "l[",n,"]=",l[n],",",'+'*l[n]
		elif l[n]<0:
			l[n] = -l[n]
			print "l[",n,"]=",l[n],",",'-'*l[n]

l1=[]

num=int(raw_input("enter number of values:"))

for n in range(0,num):
	l1.append(int(raw_input("enter number:")))
histogram(l1)
