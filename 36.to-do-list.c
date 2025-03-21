#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 200
#define FILENAME "tasks.txt"

char tasks[MAX_TASKS][TASK_LENGTH];
int task_count = 0;

void display_menu();
void view_tasks();
void add_task();
void delete_task();
void load_tasks();
void save_tasks();

int main() {
    int choice;

    load_tasks();

    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                view_tasks();
                break;
            case 2:
                add_task();
                break;
            case 3:
                delete_task();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                save_tasks();
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void display_menu() {
    printf("\n--- To-Do List Menu ---\n");
    printf("1. View Tasks\n");
    printf("2. Add Task\n");
    printf("3. Delete Task\n");
    printf("4. Exit\n");
}

void view_tasks() {
	int i;
    if (task_count == 0) {
        printf("No tasks available.\n");
    } else {
        printf("\n--- Your Tasks ---\n");
        for (i = 0; i < task_count; i++) {
            printf("%d. %s\n", i + 1, tasks[i]);
        }
    }
}

void add_task() {
    if (task_count >= MAX_TASKS) {
        printf("Task list is full! Cannot add more tasks.\n");
        return;
    }

    char new_task[TASK_LENGTH];
    printf("Enter the new task: ");
    fgets(new_task, TASK_LENGTH, stdin);

    new_task[strcspn(new_task, "\n")] = '\0';

    strcpy(tasks[task_count], new_task);
    task_count++;
    printf("Task added successfully!\n");

    save_tasks();
}

void delete_task() {
    if (task_count == 0) {
        printf("No tasks available to delete.\n");
        return;
    }

    int task_number;
    int i;
    view_tasks();
    printf("Enter the task number to delete: ");
    scanf("%d", &task_number);
    getchar();

    if (task_number < 1 || task_number > task_count) {
        printf("Invalid task number!\n");
        return;
    }

    for (i = task_number - 1; i < task_count - 1; i++) {
        strcpy(tasks[i], tasks[i + 1]);
    }

    task_count--;
    printf("Task deleted successfully!\n");

    save_tasks();
}

void load_tasks() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("No existing tasks file found. A new one will be created.\n");
        return;
    }

    char line[TASK_LENGTH];
    while (fgets(line, TASK_LENGTH, file) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        strcpy(tasks[task_count], line);
        task_count++;
    }

    fclose(file);
}

void save_tasks() {
	int i;
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error saving tasks to the file!\n");
        return;
    }

    for (i = 0; i < task_count; i++) {
        fprintf(file, "%s\n", tasks[i]);
    }

    fclose(file);
}
