CC=gcc


Test:test.c
	${CC} test.c -o Test lib_file.a

add.o:add.c
	${CC} -c add.c

sub.o:sub.c
	${CC} -c sub.c

clean:
	rm -rf Test *.o




$@       name of the target
$<	 name of the first prerequisite
$^	    names of all prerequisites
Gopal
3:52 PM
foo: foo1.o   foo2.o
         gcc  -o  foo  foo1.o  foo2.o

foo2.o: foo2.c   foo2.h  foo1.h
         gcc  -c  foo2.c

foo1.o: foo1.c   foo1.h
           gcc   -c  foo1.c
modification :
foo: foo1.o   foo2.o
     gcc  -o  $@  $^

foo2.o: foo2.c   foo2.h   foo1.h
     gcc  -c  $<

foo1.o: foo1.c   foo1.h
     gcc   -c  $<
