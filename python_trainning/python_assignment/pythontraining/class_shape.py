class Shape:
	def __init__(self,x,y):
		self.x=x
		self.y=y
	def area(self):
		return self.x*self.y
	def perimeter(self):
		return 2*self.x+2*self.y

myShape=Shape(10,20)
print myShape.area()
print myShape.perimeter()

class Square(Shape):
	def __init__(self,x):
		Shape.__init__(self,x,x)
		#self.x=x
		#self.y=y

mySquare=Square(25)
print mySquare.area()
print mySquare.perimeter()

class DoubleSquare(Square):
	def __init__(self,y):
		self.x=y
		self.y=2*y
	
	def perimeter(self):
		return 2*self.x+3*self.y

myDoubleSquare=DoubleSquare(45)
print myDoubleSquare.area()
print myDoubleSquare.perimeter()
