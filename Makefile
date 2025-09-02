all:
	c++ -std=c++14 -I ./include src/*.cpp -Wall -Wextra -o math_program

clean:
	rm math_program
