#Implementation of tictactoe game

box=[[1,2,3],[4,5,6],[7,8,9]]
row=0
col=0

def checkplace(place,char):
	"""checkplace function checks if place is already occupied or not"""

	for i in range(0,3):
		for j in range(0,3):
			if box[i][j]==place:
				return 1
	else:
		return 0
				
def fillplace():
	"""Fillplace function checks if all places are occupied or not"""
	count=0
	for i in range(0,3):
		for j in range(0,3):
			if box[i][j]=='o' or box[i][j]=='x':
				count=count+1
	if count==9:
		return 1
	else:
		return 0


def insert(place,char):
	"""Insert function inserts turn into specified place"""
	global box
	global row
	global col
	for i in range(0,3):
		for j in range(0,3):
			if box[i][j]==place:
				box[i][j]=char
				row=i
				col=j
	draw()

def rowcheck(place,char):
	"""rowcheck function checks for row match"""
	count=0
	for j in range(0,3):
		if box[row][j]==char:
			count=count+1
		if count==3:
			return 1
	else:
		return 0	

def colcheck(place,char):
	"""colcheck function checks for column match"""
	count=0
	for i in range(0,3):
		if box[i][col]==char:
			count=count+1
		if count==3:
			return 1
	else:
		return 0	

def diagcheck(place,char):
	"""diagcheck function checks for diagonal match"""
	count=0
	for i in range(0,3):
		for j in range(0,3):
			if i==j and box[i][j]==char:
				count=count+1
	if count==3:
		return 1
	count=0
	for i in range(0,3):
		for j in range(0,3):
			if i==j+2 and box[i][j]==char:
				count=count+1
			elif j==i+2 and box[i][j]==char:
				count=count+1
	
	if count==3:
		return 1
	else:
		return 0


def draw():
	"""draw function design 3x3 box"""
	for i in range(0,3):
		for j in range(0,3):
			print box[i][j],"|",
		print "\n",''.center(12,'-')

def operations(player,place1,char1):
	"""operations function calls all operations"""
	global count
	res=checkplace(place1,char1) #check for place availability
	if res==1:
		insert(place1,char1) #inserts character into specified place
	else:
		print "Already filled.Try another place"
		return 0
	res=rowcheck(place1,char1) #checks for row match
	if res==1:
		print "Player: ",player,"won"
		return 1
	res=colcheck(place1,char1) #checks for column match
	if res==1:
		print "Player: ",player,"won"
		return 1
	res=diagcheck(place1,char1) #checks for diagonal match
	if res==1:
		print "Player: ",player,"won"
		return 1
	count=count+1

count=2
draw()
while True:
	if count%2==0:
		res=fillplace()
		if res==1:
			print "All places are filled.Match draw"
			break
		play1=input("Player1 place number(O):")
		if play1>9:
			print "Invalid Place.Enter [1-9]."
			continue
		res=operations(1,play1,'o')
		if res==1:
			break
		else:
			continue
	elif count%2!=0:
		res=fillplace()
		if res==1:
			print "All places are filled.Match draw"
			break
		play1=input("Player2 place number(x):")
		if play1>9:
			print "Invalid Place.Enter [1-9]."
			continue
		res=operations(2,play1,'x')
		if res==1:
			break
		else:
			continue
