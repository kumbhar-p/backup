import re

str1="Abc def abc"

print re.findall("abc",str1)

str1="Abc def abc"
print re.findall("abc",str1,re.IGNORECASE)
