all: a.out

a.out: main.c
	gcc main.c

launch: a.out
	./a.out

recompile: a.out
	rm a.out; make launch

clean:
	rm a.out