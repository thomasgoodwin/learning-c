CC = gcc
CFLAGS = -Wall -Wextra

TARGET = build/level-one.exe
SRC = src/level-one/main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -g $(CFLAGS) -o $(TARGET) $(SRC)

run: 
	$(TARGET)

clean:
	rm -f $(TARGET)