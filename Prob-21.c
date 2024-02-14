#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);
    int marks[n][m];
    int totalMarks[n];
    for (int i = 0; i < n; i++) {
        totalMarks[i] = 0;
        printf("Enter marks for student %d in each subject:\n", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j];
        }
    }
    printf("Total Marks for each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, totalMarks[i]);
    }
    return 0;
}
