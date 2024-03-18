#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int age;
};

int main()
{
    struct Student s1;

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("\nName = %s", s1.name);
    printf("Age = %d\n", s1.age);

    return 0;
}