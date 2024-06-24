#include <stdio.h>

// Function to change the marks of a student
int changeMarks(int marks) {
    // Change the marks here, for example, adding 10 to the current marks
    marks += 10;
    return marks;
}

int main() {
    int studentMarks = 80;
    
    printf("Original marks: %d\n", studentMarks);
    
    // Call the function to change the marks
    studentMarks = changeMarks(studentMarks);
    
    printf("Updated marks: %d\n", studentMarks);
    
    return 0;
}
