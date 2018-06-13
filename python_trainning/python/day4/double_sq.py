class double_square :
	def __init__(self, y) :
		self.x = y
		self.y = 2 * y
		
	def area (self):
		return self.x + self.x
	def perimeter (self) :
		return 2 * self.x + 3 * self.x
myshape = double_square(5)
print myshape.area()
print myshape.perimeter()
