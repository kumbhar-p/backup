#Menu driven program for calculator

import os
import operations
import time

os.system("clear")
while True:
	string=""
	print string.center(70,'#')
	string="Calculator"
	print string.center(70,'#')
	string=""
	print string.center(70,'#')
	choice=input("1.simple calculator\n2.Scientific calculator\n3.Exit\nEnter your choice:")
	os.system("clear")
	if choice==1:
		while True:
			print "Simple Calculator"
			s=""
			print s.center(30,'-')
			choice_simcalc=input("1.add\n2.sub\n3.mul\n4.div\n5.goback\nEnter your choice:")
			if choice_simcalc==1:
				a=input("Enter first number:")
				b=input("Enter second number:")
				add=operations.add(a,b)
				print "Addition of two numbers",a,"and",b,"is",add
			elif choice_simcalc==2:
				a=input("Enter first number:")
				b=input("Enter second number:")
				sub=operations.sub(a,b)
				print "Subtraction of two numbers",a,"and",b,"is",sub
			elif choice_simcalc==3:
				a=input("Enter first number:")
				b=input("Enter second number:")
				mul=operations.mul(a,b)
				print "Multiplication of two numbers",a,"and",b,"is",mul
			elif choice_simcalc==4:
				a=input("Enter first number:")
				b=input("Enter second number:")
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
			choice_sicalc=input("1.sin\n2.cos\n3.power of\n4.square root\n5.go back\nEnter your choice:")
			if choice_sicalc==1:
				a=input("Enter number:")
				sin=operations.sin(a)
				print "Sin of",a,"is",sin
			elif choice_sicalc==2:
				a=input("Enter number:")
				cos=operations.cos(a)
				print "Cos of",a,"is",cos
			elif choice_sicalc==3:
				a=input("Enter base number:")
				b=input("Enter power:")
				power=operations.powerof(a,b)
				print a,"to the power of ",b,"is",power
			elif choice_sicalc==4:
				a=input("Enter number:")
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
