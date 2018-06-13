#we can keep parameters as default also.
#if we can pass default values to default parameters it will take otherwise its takes default values only
def printinfo(arg1, *vartuple):
    print "output : "
    print arg1
    for var in vartuple:
       print var
    return;
#now you can function
printinfo(11)
printinfo(11,12,13,17,18,19)

