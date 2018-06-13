#Menu driven program for calculator

import os
import operations_exceptions as operations
import time

os.system("clear")
while True:
	string=""
	print string.center(70,'#')
	string="Calculator"
	print string.center(70,'#')
	string=""
	print string.center(70,'#')
	try:
		choice=input("1.simple calculator\n2.Scientific calculator\n3.Exit\nEnter your choice:")
	except NameError:
		print "Enter only digits"
		time.sleep(1)
		os.system("clear")
		continue
	os.system("clear")
	if choice==1:
		while True:
			print "Simple Calculator"
			s=""
			print s.center(30,'-')
			try:
				choice_simcalc=input("1.add\n2.sub\n3.mul\n4.div\n5.goback\nEnter your choice:")
			except NameError:
				print "Enter only digits"
				time.sleep(1)
				os.system("clear")
				continue
			if choice_simcalc==1:
				try:
					a=input("Enter first number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				try:
					b=input("Enter second number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				add=operations.add(a,b)
				print "Addition of two numbers",a,"and",b,"is",add
			elif choice_simcalc==2:
				try:
					a=input("Enter first number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				try:
					b=input("Enter second number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				sub=operations.sub(a,b)
				print "Subtraction of two numbers",a,"and",b,"is",sub
			elif choice_simcalc==3:
				try:
					a=input("Enter first number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				try:
					b=input("Enter second number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				mul=operations.mul(a,b)
				print "Multiplication of two numbers",a,"and",b,"is",mul
			elif choice_simcalc==4:
				try:
					a=input("Enter first number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				try:
					b=input("Enter second number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				div=operations.div(a,b)
				print "Division of two numbers",a,"and",b,"is",div
			elif choice_simcalc==5:
				os.system("clear")
				break
			else:
				print "Invalid Option.Please enter again."
				time.sleep(1)
				os.system("clear")
				continue
			time.sleep(1)
			os.system("clear")
	elif choice==2:
		while True:
			print "Scientific Calculator"
			s=""
			print s.center(30,'-')
			try:
				choice_sicalc=input("1.sin\n2.cos\n3.power of\n4.square root\n5.go back\nEnter your choice:")
			except NameError:
				print "Enter only digits"
				time.sleep(1)
				os.system("clear")
				continue
			if choice_sicalc==1:
				try:
					a=input("Enter number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				sin=operations.sin(a)
				print "Sin of",a,"is",sin
			elif choice_sicalc==2:
				try:
					a=input("Enter number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				cos=operations.cos(a)
				print "Cos of",a,"is",cos
			elif choice_sicalc==3:
				try:
					a=input("Enter base number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				try:
					b=input("Enter power:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				power=operations.powerof(a,b)
				print a,"to the power of ",b,"is",power
			elif choice_sicalc==4:
				try:
					a=input("Enter number:")
				except NameError:
					print "Enter only digits"
					time.sleep(1)
					os.system("clear")
					continue
				squareroot=operations.squareroot(a)
				print "Square-root of",a,"is",squareroot
			elif choice_sicalc==5:
				os.system("clear")
				break
			else:
				print "Invalid Option.Please enter again."
				time.sleep(1)
				os.system("clear")
				continue
			time.sleep(1)
			os.system("clear")
	elif choice==3:
		break
	else:
		print "Invalid Option.Please enter again."
		time.sleep(1)
		os.system("clear")
		continue
