all: main.o structs.o
	gcc -o prgrm main.o structs.o

main.o: main.c structs.h
	gcc -c main.c

structs.o: structs.c structs.h
	gcc -c structs.c

run: prgrm
	./prgrm
