#!/usr/bin/python

"""
	Script : matirx_add.py
	Author : Bhavya
	Date : April-17-2017
	Purpose : Perform matrix operations add,transpose and multiplication
   				python program.
"""
from pprint import pprint as pp

while True:
	print """*******MENU***************
	MATRIX OPERATIONS

	1. ADDITION
	2. TRANSPOSE
	3. MULTIPLICATION"""

	rows = int(raw_input("enter number of rows:"))
	columns = int(raw_input("enter number of columns:"))

	m1=[]
	m2=[]
	m3=[]
	if rows!=columns:
		print "Rows and Columns are not equal.Cannot perform any operation"
	else:
		print "enter elements of first matrix"

		for row in range(0,rows):
			m11=[]
			for column in range(0,columns):
				m11.append(input())
			m1.append(m11)

		print "enter elements of second matrix"
		for row in range(0,rows):
			m22=[]
			for column in range(0,columns):
				m22.append(input())
			m2.append(m22)

		print "elements of first matrix"
		pp(m1)

		print "elements of second matrix"
		pp(m2)
		choice=input("enter your choice")
		if choice==1:
			for row in range(0,rows):
				matC=[]
				for col in range(0,columns):
					matC.append(m1[row][col]+m2[row][col])
				m3.append(matC)
			print "Sum:"
			pp(m3)
		elif choice==2:
			m1T=[]
			m2T=[]
			for col in range(0,columns):
				matA=[]
				for row in range(0,rows):
					matA.append(m1[row][col])
				m1T.append(matA)
			for col in range(0,columns):
				matA=[]
				for row in range(0,rows):
					matA.append(m2[row][col])
				m2T.append(matA)
			print "Transpose:"
			pp(m1T)
			pp(m2T)
		elif choice==3:
			prod=[]
			sum1=[]
			for r in range(0,rows):
				for c in range(0,columns):
					sum=0
					for k in range(0,rows):
						sum+=m1[r][k]*m2[k][c]
					sum1.append(sum)
			prod.append(sum1)
			print "Product:"
			pp(prod)
