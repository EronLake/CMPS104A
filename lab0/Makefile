##############################################
#Makefile
#Eron Lake
#ejlake@ucsc.edu
#CMPS104A
#Makefile for introduction/refresher on c++/c
##############################################


all: lab0.o myclass.o 
	g++ -o lab0 -g -O0 -Wall -Wextra -std=gnu++14 lab0.o myclass.o 

lab0: lab0.cpp
	g++ -g -O0 -Wall -Wextra -std=gnu++14 lab0.cpp

myclass.cpp: myclass.cpp
	g++ -g -O0 -Wall -Wextra -std=gnu++14 myclass.cpp


clean:
	rm lab0 *.o
