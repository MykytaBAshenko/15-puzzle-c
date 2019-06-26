all: get_source get_headers install clean
get_source:
	cp Source\ files/*.c .
get_headers:
	cp Source\ files/*.h .
install:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses -o endgame *.c
clean:
	rm -rf *.c
	rm -rf *.h
	rm -rf *.o
uninstall:
	rm -rf endgame
reinstall: uninstall all

