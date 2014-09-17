CC = gcc
CFLAGS = -Wall

all: test

LIST_TEST = tests/list_test.c src/list.c

tests/list.test: $(LIST_TEST)
	$(CC) $(CFLAGS) -o $@ $(LIST_TEST)

.PHONY: %.test
.SILENT: %.test
%.test: tests/%.test
	echo "Running $@"
	$<
	rm $<

test: list.test
