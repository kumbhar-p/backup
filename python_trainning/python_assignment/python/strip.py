#!/usr/bin/python
"""
	Script : strip
	Author : Bhavya
	Date : june-16-2017
	Purpose : To observe strip
"""

import sys

def timeConversion(s):
    # Complete this function
	r=[];
	r=s.split(':')

	if "PM" in r[-1]:
		if not r[0] in '12':
			t=r[-1][0:2]
			r[0]=int(r[0])+12
			r[-1]=t
			r[0]=str(r[0])
	s1=':'.join(r)
	print s1    

s=raw_input().strip()

result = timeConversion(s)
print(result)
		
