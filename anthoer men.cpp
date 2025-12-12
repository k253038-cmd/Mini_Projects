#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int id;
    float marks;
};

void input(struct student s[], int no) {
    for (int i = 0; i < no; i++) {
        printf("Enter name of student: ");
        getchar(); // consume leftover newline
        fgets(s[i].name, sizeof(s[i].name), stdin);

        // remove trailing newline
        size_t len = strlen(s[i].name);
        if (len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Enter ID of student: ");
        scanf("%d", &s[i].id);

        printf("Enter marks of student: ");
        scanf("%f", &s[i].marks);
    }
}

void display(struct student s[], int no) {
    for (int i = 0; i < no; i++) {
        printf("Name of student: %s\n", s[i].name);
        printf("ID of student: %d\n", s[i].id);
        printf("Marks of student: %.2f\n", s[i].marks);
    }
}

int main() {
    int no;
    printf("Enter the number of students: ");
    scanf("%d", &no);

    struct student s[no];
    input(s, no);
    display(s, no);

    return 0;
}
