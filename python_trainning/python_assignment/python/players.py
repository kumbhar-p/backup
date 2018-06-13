#!/usr/bin/python

"""
	Script : players.py
	Author : Bhavya
	Date : April-19-2017
	Purpose : Build an application which takes the names of team members and
				holds them in an data structure and perform set operations
"""
cricket={1}
football={1}
cricket.pop()
football.pop()

while True:
	names=raw_input("Enter name:")
	cricketname=raw_input("Do you play cricket?[Y/N]?:")
	footballname=raw_input("Do you play football[Y/N]?:")
	if cricketname in "Yy":
		cricket.add(names)
	if footballname in "Yy":
		football.add(names)
	choice=raw_input("Do you want to add players?[Y/N]:")
	if choice in "Nn":
		break

print "players who play cricket:"
for n in cricket:
	print n

print "Players who play football:"
for n in football:
	print n

print "players who play both cricket and football:"
for n in (cricket&football):
	print n

print "players who only play either cricket or football:"
for n in (cricket-football):
	print n	
