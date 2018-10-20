a.out: main.o a.o
	g++ main.o a.o -o a.out

main.o: main.cc a.h
	g++ -c main.cc

a.o: a.cc a.h
	g++ -c a.cc

clean:
	rm *.o a.out
