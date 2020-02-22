# program executable
# dependencies: main.o, lib.o
program.out: main.o lib.o
	gcc -o program.out main.o lib.o

# main object file
# dependencies: main.c
main.o: main.c
	gcc -c -o main.o main.c

# create a library object file
# dependencies: add.c, sub.h
lib.o: calculate.o add.o sub.o
	ld -r -o lib.o calculate.o add.o sub.o

# calculate object file
# dependencies: calculate.c, calculate.h
calculate.o: calculate.c calculate.h
	gcc -c -o calculate.o calculate.c
# add object file
# dependencies: add.c, add.h
add.o: add.c add.h
	gcc -c -o add.o add.c

# sub object file
# dependencies: sub.c, sub.h
sub.o: sub.c sub.h
	gcc -c -o sub.o sub.c

.PHONY: clean
clean:
	rm -rf program.out *.o