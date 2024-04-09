Results:	Results.o functions.o
	gcc -o Results Results.o functions.c
	
Results.o:	Results.c Structure_header.h
	gcc -c Results.c
	
functions.o:	functions.c Structure_header.h
	gcc -c functions.c			
