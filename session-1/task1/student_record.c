/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(struct student_record student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks

    float avg_mark;

    for (int i = 0; i < 3; i++) {
        avg_mark += student.marks[i];
    }

    avg_mark = avg_mark / 3.0;
    
    return avg_mark;
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(struct student_record student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    // I've put this in the header file
    //typedef student_record Student;

    Student student1 = {"John Smith", 12345, {75.0, 68.5, 81.0}};

    // TODO: display the student data and average mark
    float avg_mark = calculate_average(student1);

    printf("Name: %s\nID: %d\nMarks: %.2f, %.2f, %.2f\nAverage Marks: %.2f", 
        student1.name, student1.id, student1.marks[0], student1.marks[1], student1.marks[2], avg_mark);
    
    return 0;
}