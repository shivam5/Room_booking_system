prog: main.o room.o lab.o lec.o
	g++ main.o room.o lab.o lec.o -o prog

main.o: main.cpp
	g++ -c main.cpp

room.o: room.cpp room.h
	g++ -c room.cpp

lab.o: lab.cpp lab.h
	g++ -c lab.cpp

lec.o: lec.cpp lec.h
	g++ -c lec.cpp

clean:
	rm *.o prog