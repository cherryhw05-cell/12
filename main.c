// 12주차 프로그래밍 실습

// 실습01
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int ID; 
    char name[10];
    float grade;
};

int main(void) {
    struct student s1 = {100, "LeeHeewon", 4.3};

    s1.ID = 2516021;
    strcpy(s1.name, "LEE");
    s1.grade = 4.0;

    printf("ID : %i, name : %s, grade : %f\n", s1.ID, s1.name, s1.grade);

    return 0;
}