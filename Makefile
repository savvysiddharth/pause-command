compile:
	g++ src/pause.cpp -o bin/pause

install: compile
	mv bin/pause /usr/local/bin