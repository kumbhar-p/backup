.PHONY : clean 
#victory : main.o sum.o sub.o mul.o div.o \
	gcc -o victory main.o sum.o sub.o mul. div.o #

#foo := a.o b.o c.o\
bar := $(foo:.o=.c)

p = c  
foo = main.c sum.c sub.c mul.c dive.c 
objects := $(foo:.c=.o)

victory: $(objects)
	gcc -o  victory  $(objects)
#main.o : main.$p\
	gcc -c man.${p}\
sum.o : sum.c\
	gcc -c sum.c\
sub.o : sub.c\
	gcc -c sub.c\
mul.o : mul.c\
	gcc -c mul.c\
dive.o : dive.c\
	gcc -c dive.c

#%.o : %.c\
	gcc -c $^
clean:
	rm  -f *.o

