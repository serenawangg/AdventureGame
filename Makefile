group02: swang.o kfreeves.o bcalderon6.o group02.o
	g++ swang.o kfreeves.o bcalderon6.o group02.o -o group02

group02.o: group02.cpp group02.h
	g++ -c group02.cpp

swang.o: swang.cpp group02.h
	g++ -c swang.cpp

kfreeves.o: kfreeves.cpp group02.h
	g++ -c kfreeves.cpp

bcalderon6.o: bcalderon6.cpp group02.h
	g++ -c bcalderon6.cpp

clean:
	rm *.o group02

