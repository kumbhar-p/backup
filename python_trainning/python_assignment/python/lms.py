#!/usr/bin/python
"""
	Script : lms.py
	Author : Bhavya
	Date : Sept-04-2017
	Purpose :A module library management system, which stores list of books by name "titles.dat" and for searching for a book from a file.
"""
import sys

def enterdetails():
	f=open("titles.dat","a")
	while True:
		isbnum=raw_input("Enter isbn number:")
		if not isbnum:
			print "ISBN number cannot be empty"
			continue
		title=raw_input("Enter title Name:")
		if not title:
			print "title cannot be empty"
			continue
		author=raw_input("Enter Author Name(Press 'q' to exit):")
		category=raw_input("Enter Category:")
		price=raw_input("Enter price($):")
		record="{},{},{},{},{}".format(isbnum,title,author,category,price)
		f.write(record)
		again=raw_input("Do you want to enter again[Y/N]?")
		if again in "Nn":
			break
	f.close()
		

def searchdetails():
	f=open("titles.dat","r")
	while True:
		isbn=raw_input("Enter isbn:")
		for i in f:
			list1=i.split(',')
			if isbn
if len(sys.argv)==1:
	print "usage of filename"
else:
	option=raw_input("1.Enter book details.\n2.Search\n")
	if option is "1":
		#f=open("sys.argv[2]","a")
		enterdetails()
	elif option is "2":
		searchdetails()
