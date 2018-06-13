#!/usr/bin/python

"""
	Script : greeting.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Greeting function will take tile,name and the message.
   			Should print in format python program.
"""
def greeting_func(title,name,message):
	print """{}.{}\n{}""".format(title,name,message)


title=(raw_input("Enter Title [mr/mrs/shri/dr/ms]:"))
name=(raw_input("Enter Name:"))
message=(raw_input("Enter Message:"))

greeting_func(title=title,message=message,name=name)

