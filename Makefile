compile:
	@echo mkdir bin
	g++ src/pause.cpp -o bin/pause

install: compile
	mv bin/pause ~/.local/bin