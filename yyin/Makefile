all: app
app: scanner.l parser.y
	bison --defines=parser.hpp --output=parser.cpp parser.y
	flex --outfile=scanner.cpp scanner.l
	g++ -o program scanner.cpp parser.cpp Example.cpp -lfl
	
clean:
	rm parser.hpp parser.cpp scanner.cpp
