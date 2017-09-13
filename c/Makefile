CC = gcc
CFLAGS = -o3
LDFLAGS = -lreadline
BUILD = build

SRC = step0_repl.c
OBJS = $(SRC:%.c=%.o)
BINS = $(OBJS:%.o=%)

all: $(BINS)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $(@:%.o=%.c) -o $(build)/$@

$(BINS): %: %.o
	$(CC) $(build)/$+ -o build/$@ $(LDFLAGS)

clean:
	rm -f $(BINS)
