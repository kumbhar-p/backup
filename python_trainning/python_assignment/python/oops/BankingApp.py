#!/usr/bin/python
"""
	Script : BankingApp.py
	Author : Bhavya
	Date : April-21-2017
	Purpose : Banking Application
"""
import os
import Input
from Account import *

number=12345
BankDetails={}

#Function to open account
def open_acc():
	global number
	acc_num=number
	name=Input.getstring("Enter your name:")
	acc_type=Input.getchar("Enter account type:s[savings],c[current]:")
	bal=0
	obj=Account(acc_num,name,acc_type,bal)
	obj.showAccountDetails()
	BankDetails[acc_num]=obj
	print "Your account is created with account number",acc_num
	number+=1


#Function to get account details
def get_acc_details():
	acc_num=Input.getinteger("Enter your account number:")
	if acc_num in BankDetails:
		BankDetails[acc_num].showAccountDetails()
	else:
		print acc_num,"does not exists"

#Function to deposit amount
def deposit():
	acc_num=Input.getinteger("Enter your account number:")
	if acc_num in BankDetails:
		amt=Input.getinteger("Enter amount to be deposited:")
		BankDetails[acc_num].deposit(amt)
	else:
		print acc_num,"does not exists"

#Function to withdraw amount
def withdraw():
	acc_num=Input.getinteger("Enter your account number:")
	if acc_num in BankDetails:
		amt=Input.getinteger("Enter amount to be withdrawn:")
		if amt<0:
			print "Amount cannot be less than zero"
		elif amt<BankDetails[acc_num].getbal():
			BankDetails[acc_num].withdraw(amt)
		else:
			print "Insufficient funds"
	else:
		print acc_num,"does not exists"

#Function to close account
def close_acc():
	acc_num=Input.getinteger("Enter account number:")
	if acc_num in BankDetails:
		del BankDetails[acc_num]
	else:
		print acc_num,"does not exists"
		
while True:
	os.system("clear")
	print """
		Bank Operations
		=================
		1.Open an A/c
		2.Get A/c Details
		3.Transactions
		5.Closing A/c
		6.Quit
	"""
	choice=Input.getinteger("Enter your choice:")
	if choice<=0:
		print "choice cannot be less than zero...Enter again..."
	elif choice==1:
		open_acc()
	elif choice==2:
		get_acc_details()
	elif choice==3:
		print "1.Deposit\n2.Withdraw"
		choice1=Input.getinteger("Enter your choice:")
		if choice1<=0:
			print "choice cannot be less than zero..Enter again.."
		elif choice1==1:
			deposit()
		elif choice1==2:
			withdraw()
	elif choice==4:
		close_acc()
	elif choice==5:
		break
	dummy=raw_input("press ENTER to continue..")
