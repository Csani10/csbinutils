all: randline lc 8ball

randline:
	gcc -o randline randline.c

lc:
	gcc -o lc lc.c

8ball:
	gcc -o 8ball 8ball.c

install:
	sudo cp 8ball /usr/bin
	sudo cp lc /usr/bin
	sudo cp randline /usr/bin

uninstall:
	sudo rm /usr/bin/8ball
	sudo rm /usr/bin/lc
	sudo rm /usr/bin/randline

clean:
	rm 8ball
	rm randline
	rm lc
