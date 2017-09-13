CC = clang
CFLAGS = -lreadline
BUILD = ./build
SRC = ./src

default: s0

s0:
	$(CC) $(CFLAGS) $(SRC)/step_0.c -o $(BUILD)/step_0.out

clean:
	rm $(BUILD)/*.o
