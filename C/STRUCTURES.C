#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int *arr = malloc(sizeof(int));
    *arr = 13;
    arr = realloc(arr, 2 * sizeof(int));
    *(arr + 1) = *arr;
    printf("%d", *(arr + 1));

}
// struct student
// {
//     char name[50];
//     int number;
//     int age;
// };
// // Struct pointer as a function parameter void showStudent Data (struct student *st) {
// void showStudentData(struct student *st)
// {
//     printf("Student: \n");
//     printf("Name: %s\n", st->name);
//     printf("Number: %d\n", st->number);
//     printf("Age: %d\n", st->age);
// }
// struct student st1 = {"Krishna", 5, 21};
// int main()
// {
//     showStudentData(&st1);
//     return 0;
// }

// typedef struct{
//     int id;
//     char name[20];
//     float
// }

// void main()
// {
//     int *arr = malloc(sizeof(int));
//     *arr = 13;
//     arr = realloc(arr, 2 * sizeof(int));
//     *(arr + 1) = *arr;
//     printf("%d", *(arr + 1));

// }