.DEFAULT_GOAL := build

.PHONY: clean build

clean:
	rm -rf one

build:
	gcc -o one one.c
