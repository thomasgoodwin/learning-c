CC = gcc
CFLAGS = -Wall -Wextra -g

LEVELS = level-zero level-one level-two level-three

.PHONY: all clean run $(LEVELS)

all: $(LEVELS)

$(LEVELS):
	@mkdir -p build
	$(CC) $(CFLAGS) -o build/$@.exe src/$@/main.c

run:
	@if [ -z "$(LEVEL)" ]; then \
		echo "Usage: make run LEVEL=level-one"; \
	else \
		./build/$(LEVEL).exe $(ARG); \
	fi

clean:
	rm -rf build