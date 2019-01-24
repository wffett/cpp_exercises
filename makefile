main.out : main.cpp showtime.cpp makefile
		g++ -o main.out main.cpp showtime.cpp
clean :
		rm *.out main.cpp makefile
