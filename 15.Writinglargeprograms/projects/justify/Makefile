justify: justify.o word.o line.o
	gcc -o justify justify.o word.o line.o -Wall -Wextra -Wpedantic -std=c99

justify.o: justify.c word.h line.h
	gcc -c justify.c -Wall -Wextra -Wpedantic -std=c99

word.o: word.c word.h
	gcc -c word.c -Wall -Wextra -Wpedantic -std=c99
	
line.o: line.c line.h
	gcc -c line.c -Wall -Wextra -Wpedantic -std=c99
