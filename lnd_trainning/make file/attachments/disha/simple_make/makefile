.PHONY: clean
all : exec1 exec2
	make exec1 exec2	

exec1 : main.o
	gcc -o $@ main.o

exec2 : fun.o
	gcc -o $@ fun.o

main.o : main.c
	gcc -c main.c

fun.o : fun.c
	gcc -c fun.c

clean :
	rm -f *.o
	rm -f exec1 exec2
	rm -f all
