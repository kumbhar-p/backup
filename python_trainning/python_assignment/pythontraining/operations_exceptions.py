#Operations file

import math

def add(a,b):
	"""add function which takes 2 arguments and returns sum of 2 arguments"""
	return a+b

def sub(a,b):
	"""sub function which takes 2 arguments and returns subtraction of 2 arguments"""
	return a-b

def mul(a,b):
	"""mul function takes 2 arguments and returns multiplication of 2 arguments"""
	return a*b

def div(a,b):
	"""div function takes 2 arguments and returns division of first argument by second argument"""
	try:
		return a/b
	except ZeroDivisionError:
		print "Division by zero"
	return 0

def sin(a):
	"""Returns sin(a) in radians"""

	return math.sin(a)

def cos(a):
	"""Returns cos(a) in radians"""
	return math.cos(a)

def powerof(a,b):
	"""Returns a to the power of b a**b"""
	return math.pow(a,b)

def squareroot(a):
	"""Returns squareroot of a"""

	return math.sqrt(a)

