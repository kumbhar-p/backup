ip_add = raw_input()
len_ = len(ip_add)
arr = ip_add.split('.')
for i in arr:
    if int(i) >= 0 and int(i) <= 255:   
        pass        
    else:
        print "wrong ip"
        break
