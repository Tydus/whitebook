
LIBS=-lm

app=$(patsubst %.c,%,$(shell ls *.c))

all: $(app)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

clean:
	$(RM) *.o $(app)

.PHONY: all clean
