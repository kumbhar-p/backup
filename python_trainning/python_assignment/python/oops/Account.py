#!/usr/bin/python
"""
	Script :Account.py 
	Author : Bhavya
	Date : April--2017
	Purpose : Banking Application python program
"""
import Input

class Account(object):
	"""
		Has attributes like Account Number,Name,Account Type,Balance 
	"""
	#Constructor
	def __init__(self,acc_num,name,acc_type,bal=0):
		"""
			Instance variables are:acc_num,name,acc_type,bal
		"""
		self.acc_num=acc_num
		self.name=name
		self.acc_type=acc_type
		self.bal=bal
	
	#Getters and Setters
	def getacc_num(self):
		"""
			Return the Account number
		"""
		return self.acc_num

	def getname(self):
		"""
			Return the name of the account holder
		"""
		return self.name

	def getacc_type(self):
		"""
			Return the account type
		"""
		return self.acc_type

	def getbal(self):
		"""
			Return the balance of an account
		"""
		return self.bal

	def setacc_num(self,acc_num):
		"""
			Set or alter the Account number
		"""
		self.acc_num=acc_num


	def setname(self,name):
		"""
			Set or alter the name of the accout holder
		"""
		self.name=name


	def setacc_type(self,acc_type):
		"""
			Set or alter the Account type
		"""
		self.acc_type=acc_type


	def setbal(self,bal):
		"""
			Set or alter the balance
		"""
		self.bal=bal

	def showAccountDetails(self):
		"""
			Display Account Details.
		"""
		print "Account number:",self.acc_num
		print "Name:",self.name
		print "Account Type:",self.acc_type
		print "Balance:",self.bal
	"""
	def __del__(self):
		
		#The Account's destructor method.

		print "Account does not exist"
	"""	
#String representation of the object
	def __str__(self):
		"""
			The String representation of the account object.
		"""
		return "Account Num={}\nName={}\nAccount Type={}\nBalance={}\n".format(self.acc_num,self.name,self.acc_type,self.bal)
	
	def withdraw(self,amount):
		"""
			Withdraw method 
		"""
		self.bal=self.bal-amount

	def deposit(self,amount):
		"""
			Deposit method
		"""
		self.bal=self.bal+amount
