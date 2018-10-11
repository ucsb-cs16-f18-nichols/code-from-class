# Makefile must be called Makefile


tdd.o: tdd.cpp # we want tdd.o, and we need tdd.cpp first
	g++ -c tdd.cpp # and here is how to make tdd.o

testShapes.o: testShapes.cpp
	g++ -c testShapes.cpp

testShapes: testShapes.o shapes.o tdd.o
	#The recipe for producing the target (testshapes) is below
	g++ testShapes.o shapes.o tdd.o -o testShapes

shapes.o: shapes.cpp
	g++ -c shapes.cpp

# to make testShapes,
# you type:
# bash$ make testShapes
# it's always "make recipe_name"

clean:
	# remove all compiled code
	# *.o is shorthand for all .o files in the current dir
	rm *.o testShapes