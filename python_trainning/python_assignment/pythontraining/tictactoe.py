#Implementation of tictactoe game


box=[[1,2,3],[4,5,6],[7,8,9]]
row=0
col=0

def checkplace(place,char):
	for i in range(0,3):
		for j in range(0,3):
			if box[i][j]==place:
				return 1
	else:
		return 0
				
def fillplace():
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
	global box
	global row
	global col
	for i in range(0,3):
		for j in range(0,3):
			if box[i][j]==place:
				box[i][j]=char
				row=i
				col=j
	draw(place,char)

def rowcheck(place,char):
	count=0
	for j in range(0,3):
		if box[row][j]==char:
			count=count+1
		if count==3:
			return 1
	else:
		return 0	

def colcheck(place,char):
	count=0
	for i in range(0,3):
		if box[i][col]==char:
			count=count+1
		if count==3:
			return 1
	else:
		return 0	

def diagcheck(place,char):
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


def draw(place,char):
	for i in range(0,3):
		for j in range(0,3):
			print box[i][j],"|",
		print "\n-------------------"

count=2
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
		res=checkplace(play1,'o')
		if res==1:
			insert(play1,'o')
		else:
			print "Already filled.Try another place"
			continue
		res=rowcheck(play1,'o')
		if res==1:
			print "Player: 1 won"
			break
		res=colcheck(play1,'o')
		if res==1:
			print "Player:1 won"
			break
		res=diagcheck(play1,'o')
		if res==1:
			print "Player:(diagcheck) 1 won"
			break
		count=count+1
	elif count%2!=0:
		res=fillplace()
		if res==1:
			print "All places are filled.Match draw"
			break
		play2=input("Player2 place number(X):")
		if play2>9:
			print "Invalid Place.Enter [1-9]."
			continue
		res=checkplace(play2,'x')
		if res==1:
			insert(play2,'x')
		else:
			print "Already filled.Try another place"
			continue
		res=rowcheck(play2,'x')
		if res==1:
			print "Player:2 won"
			break
		res=colcheck(play2,'x')
		if res==1:
			print "Player:2 won"
			break
		res=diagcheck(play2,'x')
		if res==1:
			print "Player: 2 won"
			break
		count=count+1
	else:
		print "Only 2 players.Enter again."
		continue

