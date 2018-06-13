def test1(*pos,**kwd): #Takes pos as tuple and kwd as dictionary
	print "positional: ",pos
	print "keyword: ", kwd

test1(10,20,a=80,b=90)
test1(10,20)
test1(a=80,b=90)
test1()


