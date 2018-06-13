list1 = ['she', 'sells', 'sea', 'shells', 'by', 'the', 'sea', 'shore']
print "words starts with sh"
for i in list1:
    char = i
    if char[0:2] == 'sh':
        print char
print "\nwords with len more than 4"
for i in list1:
    if len(i) >= 4 :
        print i
   
