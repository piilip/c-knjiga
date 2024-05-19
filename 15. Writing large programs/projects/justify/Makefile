justify: justify.o word.o line.o
	gcc -o justify justify.o line.o word.o -Wall -Wextra -Wpedantic -std=c99
justify.o: justify.c knjiga\15.\ Writing large programs\projects\justify\word.h knjiga\15.\ Writing large programs\projects\justify\line.h
	gcc -c justify.c
line.o: line.c knjiga\15.\ Writing large programs\projects\justify\line.h
	gcc -c line.c -Wall -Wextra -Wpedantic -std=c99
word.o: knjiga\15.\ Writing large programs\projects\justify\word.h word.c
	gcc -c word.c -Wall -Wextra -Wpedantic -std=c99
