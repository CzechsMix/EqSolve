test_run: test.o stack.o postfix.o extree.o
	g++ -o test_run test.o stack.o postfix.o extree.o

test.o: test/test.cpp test/test_stack.h test/test_postfix.h
	g++ -c test/test.cpp

stack.o: src/stack.cpp src/stack.h
	g++ -c src/stack.cpp

postfix.o: src/postfix.cpp src/postfix.h
	g++ -c src/postfix.cpp

extree.o: src/extree.cpp src/stack.h
	g++ -c src/extree.cpp
