# library objects
LIB_OBJECTS = dist/calculate.o dist/add.o dist/sub.o

#--------------------------------------#

# executable
dist/program.out: dist/main.o dist/lib.o
	gcc -o $@ dist/main.o dist/lib.o

# main object file
dist/main.o: src/main.*
	gcc -c -o $@ src/main.c

# lib static libary (relocatable object file)
dist/lib.o: $(LIB_OBJECTS)
	ld -r -o $@ $(LIB_OBJECTS)

# calculate object file
dist/calculate.o: src/calculate.*
	gcc -c -o $@ src/calculate.c

# add object file
dist/add.o: src/add.*
	gcc -c -o $@ src/add.c

# sub object file
dist/sub.o: src/sub.*
	gcc -c -o $@ src/sub.c

# clean object files
.PHONY: clean
clean:
	rm -f dist/*.o