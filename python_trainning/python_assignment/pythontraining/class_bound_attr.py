class Employee:
	empcount=0
	def __init__(self):
		Employee.empcount+=1
	def displaycount(self):
		return Employee.empcount
	def __del__(self):
		Employee.empcount-=1
	
emp1=Employee()
print emp1.displaycount()
emp2=Employee()
print emp2.displaycount()
print emp1.displaycount()
del emp1
print emp2.displaycount()
#print emp1.displaycount()
