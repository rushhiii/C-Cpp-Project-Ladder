#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_DESC 100
#define FILE_NAME "todo.txt"

typedef struct {
    int id;
    char description[MAX_DESC];
    int priority;
} Task;

int loadTasks(Task tasks[]);
void saveTasks(Task tasks[], int count);
void addTask(Task tasks[], int *count);
void viewTasks(Task tasks[], int count);
void deleteTask(Task tasks[], int *count);
void clearInputBuffer();

int main() {
    Task tasks[MAX_TASKS];
    int count = loadTasks(tasks);
    int choice;

    do {
        printf("\n========= To-Do List Manager =========\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1:
                addTask(tasks, &count);
                break;
            case 2:
                viewTasks(tasks, count);
                break;
            case 3:
                deleteTask(tasks, &count);
                break;
            case 4:
                saveTasks(tasks, count);
                printf("Exiting and saving tasks.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

void clearInputBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int loadTasks(Task tasks[]) {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) return 0;

    int i = 0;
    while (fscanf(file, "%d;%99[^;];%d\n", &tasks[i].id, tasks[i].description, &tasks[i].priority) == 3) {
        i++;
    }
    fclose(file);
    return i;
}

void saveTasks(Task tasks[], int count) {
    FILE *file = fopen(FILE_NAME, "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d;%s;%d\n", tasks[i].id, tasks[i].description, tasks[i].priority);
    }
    fclose(file);
}

void addTask(Task tasks[], int *count) {
    if (*count >= MAX_TASKS) {
        printf("Task limit reached!\n");
        return;
    }

    tasks[*count].id = (*count == 0) ? 1 : tasks[*count - 1].id + 1;

    printf("Enter task description: ");
    fgets(tasks[*count].description, MAX_DESC, stdin);
    tasks[*count].description[strcspn(tasks[*count].description, "\n")] = 0; // remove newline

    printf("Enter priority (1-5): ");
    scanf("%d", &tasks[*count].priority);
    clearInputBuffer();

    (*count)++;
    printf("Task added.\n");
}

void viewTasks(Task tasks[], int count) {
    if (count == 0) {
        printf("No tasks to show.\n");
        return;
    }
    printf("\nYour Tasks:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Priority: %d | %s\n", tasks[i].id, tasks[i].priority, tasks[i].description);
    }
}

void deleteTask(Task tasks[], int *count) {
    int id;
    printf("Enter task ID to delete: ");
    scanf("%d", &id);
    clearInputBuffer();

    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (tasks[i].id == id) {
            found = 1;
            for (int j = i; j < *count - 1; j++) {
                tasks[j] = tasks[j + 1];
            }
            (*count)--;
            printf("Task deleted.\n");
            break;
        }
    }
    if (!found) {
        printf("Task not found.\n");
    }
}
