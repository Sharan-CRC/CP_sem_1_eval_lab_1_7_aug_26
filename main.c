#include <stdio.h>

int main() {
    //initialise placeholders for student name
    char std_name_1[30];
    char std_name_2[30];

    //initialise student roll nos
    int std_1_roll;
    int std_2_roll;

    //initialise student marks placeholder variables - subject
    int std_1_marks_1;
    int std_1_marks_2;
    int std_1_marks_3;
    int std_2_marks_1;
    int std_2_marks_2;
    int std_2_marks_3;

    //initialise student marks placeholder variables - labs
    int std_1_lab_1;
    int std_1_lab_2;
    int std_2_lab_1;
    int std_2_lab_2;

    //initialising placeholder variables for average, percentage
    float std_1_avg;
    float std_2_avg;
    float std_1_per;
    float std_2_per;

    //initialising variables for avg between student 1 and 2
    float avg_1;
    float avg_2;
    float avg_3;


    //Reading the student details for Student 1
    printf("Enter student 1 name: ");
    scanf("%s", std_name_1);
    printf("Enter student 1 roll number: ");
    scanf("%d", &std_1_roll);
    printf("Enter student 1 marks in subject 1: ");
    scanf("%d", &std_1_marks_1);
    printf("Enter student 1 marks in subject 2: ");
    scanf("%d", &std_1_marks_2);
    printf("Enter student 1 marks in subject 3: ");
    scanf("%d", &std_1_marks_3);
    printf("Enter student 1 marks in lab 1: ");
    scanf("%d", &std_1_lab_1);
    printf("Enter student 1 marks in lab 2: ");
    scanf("%d", &std_1_lab_2);

    //Reading the student details for Student 2
    printf("Enter student 2 name: ");
    scanf("%s", std_name_2);
    printf("Enter student 2 roll number: ");
    scanf("%d", &std_2_roll);
    printf("Enter student 2 marks in subject 1: ");
    scanf("%d", &std_2_marks_1);
    printf("Enter student 2 marks in subject 2: ");
    scanf("%d", &std_2_marks_2);
    printf("Enter student 2 marks in subject 3: ");
    scanf("%d", &std_2_marks_3);
    printf("Enter student 2 marks in lab 1: ");
    scanf("%d", &std_2_lab_1);
    printf("Enter student 2 marks in lab 2: ");
    scanf("%d", &std_2_lab_2);

    //assigning/calculating averages and percentages for each student
    std_1_avg = (float)(std_1_marks_1+std_1_marks_2+std_1_marks_3)/3;
    std_2_avg = (float)(std_2_marks_1+std_2_marks_2+std_2_marks_3)/3;

    std_1_per = ((float)(std_1_marks_1+std_1_marks_2+std_1_marks_3+std_1_lab_1+std_1_lab_2)/200)*100;
    std_2_per = ((float)(std_2_marks_1+std_2_marks_2+std_2_marks_3+std_2_lab_1+std_2_lab_2)/200)*100;

    //printing the first output table
    printf("Roll no\tName\tAverage\tPercentage\n");
    printf("%d\t%s\t%0.2f\t%0.2f%%\n", std_1_roll, std_name_1, std_1_avg, std_1_per);
    printf("%d\t%s\t%0.2f\t%0.2f%%\n\n", std_2_roll, std_name_2, std_2_avg, std_2_per);

    //assigning the average subject marks between std1 and std2
    avg_1 = (float)(std_1_marks_1+std_2_marks_1)/2;
    avg_2 = (float)(std_1_marks_2+std_2_marks_2)/2;
    avg_3 = (float)(std_1_marks_3+std_2_marks_3)/2;

    //printing the final table
    printf("Subject  \tStudent 1 marks\tStudent 2 marks\tAverage\n");
    printf("Subject 1\t%d\t\t%d\t\t%.02f\n", std_1_marks_1, std_2_marks_1, avg_1);
    printf("Subject 1\t%d\t\t%d\t\t%.02f\n", std_1_marks_2, std_2_marks_2, avg_2);
    printf("Subject 1\t%d\t\t%d\t\t%.02f\n\n\n", std_1_marks_3, std_2_marks_3, avg_3);

    return 0;
}
