TARGET 	= calc
CC 		= gcc
CFLAGS  = -Wall -Wextra -std=c11



all: 		$(TARGET)


$(TARGET): 	src/main.c
	$(CC) $(CFLAGS) src/main.c -o $(TARGET)


clean:
	rm -rf $(TARGET)


run: $(TARGET)
	./$(TARGET)