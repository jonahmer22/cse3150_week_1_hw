all:
	c++ -std=c++14 -I ./include src/*.cpp main.cpp -Wall -Wextra -o math_program

clean:
	rm math_program
