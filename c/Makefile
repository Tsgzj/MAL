CC = clang
CFLAGS = -o3
LDFLAGS = -lreadline
BUILD = build

SRC = step0_repl.c
OBJS = $(SRC:%.c=%.o)
BINS = $(OBJS:%.o=%)

all: $(BINS)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $(@:%.o=%.c) -o $(BUILD)/$@

$(BINS): %: %.o
	$(CC) $(BUILD)/$+ -o build/$@ $(LDFLAGS)

clean:
	rm -f $(BINS) $(OBJS)
