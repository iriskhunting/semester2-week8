CC = gcc
CFLAGS = -Wall -Werror -g
EXECUTABLE = student

$(EXECUTABLE): student.o main.c
	$(CC) $(CFLAGS) $^ -o $@


%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm *.o $(EXECUTABLE)