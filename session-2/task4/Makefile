
student: obj/student.o obj/main.o
	gcc obj/student.o obj/main.o -o bin/student

obj/main.o: src/main.c include/student.h include/structure.h
	gcc -c src/main.c

obj/student.o: src/student.c include/student.h include/structure.h
	gcc -c src/student.c

clean:
	rm obj/student.o obj/main.o bin/student
	