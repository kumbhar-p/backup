#!/usr/bin/python
"""
	Script : spms.py
	Author : Bhavya
	Date : April-21-2017
	Purpose : Simple Product Maintenance System which strores product details
			like Item ID, Name(description) of the Item, Cost Price,
			Selling Price,Product Movement and QOH(Quantity on Hand).
"""
import sys

if len(sys.argv)==1:
	print "Usage:spms.py <filename>"
	sys.exit(23)

f=open("items.csv","a")

while True:
	ItemID=raw_input("Enter item id:")
	Name=raw_input("Enter name of the item:")
	if not ItemID or not Name:
		print "ItemId and Name cannot be empty.Enter again"
		continue
	CostPrice=float(raw_input("enter cost price of the item:"))
	SellingPrice=float(raw_input("enter selling price:"))
	ProductMovement=raw_input("""Enter product movement:F-Fast Moving,S-Slow Moving,N-Non Moving items:""")
	QOH=int(raw_input("Enter Quantity in Hand:"))
	items="{},{},{},{},{},{}\n".format(ItemID,Name,ProductMovement,CostPrice,SellingPrice,QOH)
	f.write(items)

	again=raw_input("Enter New Record[Y/N]:")
	if again in "Nn":
		break
f.close()
f=open("items.csv","r")
c=0
f1=0
s=0
n=0
for i in f:
	list1=i.split(',')
	if list1[2] in 'F':
		f1=f1+1
	elif list1[2] in 'S':
		s=s+1
	elif list1[2] in 'N':
		n=n+1

print "number of Fast Moving items:",f1
print "number of Slow Moving items:",s
print "number of Non Moving items:",n

#name=raw_input("Enter item name:")

while True:
	f.seek(0,0)
	name=raw_input("Enter item name:")
	for i in f:
		list1=i.split(',')
		if name in list1[1]:
			print "cost price:",list1[3]
			print "selling price:",list1[4]
			break
	else:
		print "Invalid item name"
		continue
	again=raw_input("Do you want to enter again[Y/N]:")
	if again in "Nn":
		break

f.close()
