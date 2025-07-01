all: calculator.o add.o sub.o mul.o div.o prime.o fibonacci.o even_odd.o calculator

add.o:add.c
	gcc -c add.c

mul.o:mul.c
	gcc -c mul.c

sub.o:sub.c
	gcc -c sub.c

div.o:div.c
	gcc -c div.c

prime.o:prime.c
	gcc -c prime.c

fibonacci.o:fibonacci.c
	gcc -c fibonacci.c

even_odd.o:even_odd.c
	gcc -c even_odd.c

calculator.o:calculator.c
	gcc -c calculator.c

calculator:calculator.o add.o mul.o sub.o div.o prime.o fibonacci.o even_odd.o
	gcc calculator.o add.o mul.o sub.o div.o prime.o fibonacci.o even_odd.o -o calculator

clean:
	rm -rf *.o calculator


