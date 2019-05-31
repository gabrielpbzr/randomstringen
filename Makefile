OUTPUT= bin/randomstring
SOURCES= src/*
CC= gcc
CFLAGS= -o $(OUTPUT) -pedantic -O2

all: clean build

build:
	mkdir bin
	$(CC) $(CFLAGS) $(SOURCES)

clean:
	rm -rf bin

run: clean build
	$(OUTPUT)

