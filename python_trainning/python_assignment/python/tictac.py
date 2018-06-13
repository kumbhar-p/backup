list1=['012','036','048','147','258','246','345','678']
attempt=0
p1=''
p2=''
choice_filled=''
choice_check=''
print '-------GAME STARTS NOW--------'

#global str1
str1= "\t0 1 2\n\t3 4 5\n\t6 7 8"
print str1

while attempt<9:
	print "enter choice from 0 to 8:\n"
	if attempt%2==0:
		choice1=raw_input("p1 should enter the choice from above:")
		if choice1 in choice_filled or choice1 not in '012345678':
			print "'choice has been taken away' or 'invalid choice' ...plz choose correct choice with the help of above diagram"
			continue
		else:
			str1=str1.replace(choice1,'*')
			choice_filled=choice_filled+choice1
			p1=p1+choice1
			choice_check=p1
	
				
	else:
		choice2=raw_input("p2 should enter the choice from above:")
		if choice2 in choice_filled or choice2 not in '012345678':
			print "'choice has been taken away' or 'invalid choice' ...plz choose correct choice with the help of above diagram"
			continue
		else:
			str1=str1.replace(choice2,'@')
			choice_filled=choice_filled+choice2
			p2=p2+choice2
			choice_check=p2
	
	print str1
	if attempt>=4:
		for i in range(0,8):
			count=0
			for j in range(0,3):
				if list1[i][j] in choice_check:
					count+=1
			if count==3:
				attempt=9
				if choice_check==p1:
					print "p1 has won"
				else:
					print "p2 has won"
		else:
			if attempt==8:
				print "its a DRAW"		
	attempt+=1
			

	
