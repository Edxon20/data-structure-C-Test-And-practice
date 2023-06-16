CC = g++
CFLAGS = -Wall -Wextra -pedantic -std=c++17
EXECUTABLE = bubbleSort

all: $(EXECUTABLE)

$(EXECUTABLE): main.cpp
	$(CC) $(CFLAGS) $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)
