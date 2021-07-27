#include <stdio.h>

struct Student { 

    char* name; 

    int roll_number; 

    int age; 

}; 


int main() 
{ 

    int i = 0, n = 5; 

  

    // Create the student's structure variable 

    // with n Student's records 

    struct Student student[n]; 

  

    // Get the students data 

    student[0].roll_number = 1; 

    student[0].name = "Abhishek"; 

    student[0].age = 12; 

    

    student[1].roll_number = 2; 

    student[1].name = "Pritam"; 

    student[1].age = 10;  

  

    student[2].roll_number = 3; 

    student[2].name = "Nakul"; 

    student[2].age = 11; 

  

    student[3].roll_number = 4; 

    student[3].name = "Shivam"; 

    student[3].age = 12; 


  

    student[4].roll_number = 5; 

    student[4].name = "Ramesh"; 

    student[4].age = 13;

  
    // Print the Students information 

    printf("Student Records:\n\n"); 

    for (i = 0; i < n; i++) { 

        printf("\tName = %s\n", student[i].name); 

        printf("\tRoll Number = %d\n", student[i].roll_number); 

        printf("\tAge = %d\n", student[i].age); 

    } 

  
    return 0; 
} 
