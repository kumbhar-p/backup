str1 = raw_input()
vol_str = "aeiouAEIOU"
vol_count = 0
leng = len(str1)
for i in vol_str:
	a = str1.count(i)
	vol_count += a
print "volwels count in string : ", vol_count
print "consonants count in string : ", leng - vol_count

