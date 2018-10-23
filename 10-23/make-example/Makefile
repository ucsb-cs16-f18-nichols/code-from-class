CXX=g++
CXXFLAGS=-Wall

# now, $(CXX) will expand to g++
# similarly for $(CXXFLAGS)

# the first rule in a Makefile is the default one:
# i.e., the one that gets made when you say "make" by itself
main: main.o print_hello_world.o print_hello.o print_comma.o print_world.o print_exclamation_point.o
	# g++ -Wall main.o print_hello_world.o print_hello.o print_comma.o print_world.o print_exclamation_point.o -o main
	# the next line is shorthand for the previous line
	# g++ -Wall $^ -o $@
	# the next line is shorthand for the previous line
	$(CXX) $(CXXFLAGS) $^ -o $@

# make already knows how to make *.o files, but we can make our own custom version
%.o : %.cpp
	# this is our custom .o rule!
	$(CXX) $(CXXFLAGS) -c $^

# so, for example, if we had main.o, this previous rule
# would get expanded to
# g++ -Wall -c main.cpp -o main.o

# the "clean" rule doesn't make anything
# instead it removes all compiled files
clean: 
	rm *.o main