CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -std=gnu89

SRC := *.c test/*.c
HEADERS := *.h test/*.h
TARGET := final.out

run: $(TARGET)
	@./$<

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

man:
	pandoc doc/printf.3.md -s -t man | /usr/bin/man -l -

clean:
	@rm -rf $(TARGET)
