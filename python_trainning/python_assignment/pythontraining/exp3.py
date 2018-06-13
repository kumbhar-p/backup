#Prints message according to day of a week

day=raw_input("Enter day of a week:")

if day=="saturday":
	print "Saturday!!!"
elif day=="sunday":
	print "Sunday!!!"
elif day=="monday" or day=="tuesday" or day=="wednesday" or day=="thursday" or day=="friday":
	print "Go and Work!!!"
else:
	print "Invalid input"
