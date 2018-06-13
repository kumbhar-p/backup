#Menu driven program for calculator

import os
import operationsfile
import time

#os.system("clear")
f1=open("calc_input.txt","r")
f2=open("calc_output.txt","w")

while True:
	string=""
	print string.center(70,'#')
	string="Calculator"
	print string.center(70,'#')
	string=""
	print string.center(70,'#')
	print "1.simple calculator\n2.Scientific calculator\n3.Exit\nEnter your choice:"
	choice=int(f1.readline())
	print choice
	if choice==1:
		while True:
			print "Simple Calculator"
			s=""
			print s.center(30,'-')
			print "1.add\n2.sub\n3.mul\n4.div\n5.goback\nEnter your choice:"
			choice_simcalc=int(f1.readline())
			if choice_simcalc==1:
				a=int(f1.readline())
				b=int(f1.readline())
				add=operationsfile.add(a,b)
				string="sum of %d and %d is %d\n"%(a,b,add)
				f2.write(string)

			elif choice_simcalc==2:
				a=int(f1.readline())
				b=int(f1.readline())
				sub=operationsfile.sub(a,b)
				string="Subtraction of %d and %d is %d\n"%(a,b,sub)
				f2.write(string)
			elif choice_simcalc==3:
				a=int(f1.readline())
				b=int(f1.readline())
				mul=operationsfile.mul(a,b)
				string="Multiplication of %d and %d is %d\n"%(a,b,mul)
				f2.write(string)
			elif choice_simcalc==4:
				a=int(f1.readline())
				b=int(f1.readline())
				div=operationsfile.div(a,b)
				string="Division of %d and %d is %d\n"%(a,b,div)
				f2.write(string)
			elif choice_simcalc==5:
				#os.system("clear")
				break
			else:
				print "Invalid Option.Please enter again."
				#time.sleep(1)
				#os.system("clear")
				continue
			#time.sleep(1)
			#os.system("clear")
	elif choice==2:
		while True:
			print "Scientific Calculator"
			s=""
			print s.center(30,'-')
			print "1.sin\n2.cos\n3.power of\n4.square root\n5.go back\nEnter your choice:"
			choice_sicalc=int(f1.readline())
			if choice_sicalc==1:
				a=int(f1.readline())
				sin=operationsfile.sin(a)
				string="Sin of %d is %d\n"%(a,sin)
				f2.write(string)
			elif choice_sicalc==2:
				a=int(f1.readline())
				cos=operationsfile.cos(a)
				string= "Cos of %d is %d\n"%(a,cos)
				f2.write(string)
			elif choice_sicalc==3:
				a=int(f1.readline())
				b=int(f1.readline())
				power=operationsfile.powerof(a,b)
				string="%d to the power of %d is %d\n"%(a,b,power)
				f2.write(string)
			elif choice_sicalc==4:
				a=int(f1.readline())
				squareroot=operationsfile.squareroot(a)
				string="Square-root of %d is %d\n"%(a,squareroot)
				f2.write(string)
			elif choice_sicalc==5:
				#os.system("clear")
				break
			else:
				print "Invalid Option.Please enter again."
				#time.sleep(1)
				#os.system("clear")
				continue
			#time.sleep(1)
			#os.system("clear")
	elif choice==3:
		break
	else:
		print "Invalid Option.Please enter again."
		#time.sleep(1)
		#os.system("clear")
		continue
