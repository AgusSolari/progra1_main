main: main.o fun1.o fun2.o
	gcc main.o fun1.o fun2.o -o main
	make clean

main.o: main.c fun1.h fun2.h
	gcc main.c -c -Wall

fun1.o: fun1.c fun1.h
	gcc fun1.c -c -Wall

fun2.o: fun2.c fun2.h fun1.h
	gcc fun2.c -c -Wall

clean: 
	rm *.o