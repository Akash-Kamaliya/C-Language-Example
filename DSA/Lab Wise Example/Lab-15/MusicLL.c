#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song {
    char name[100];
    struct Song *prev;
    struct Song *next;
};

struct Song *head = NULL;
struct Song *current = NULL;

struct Song *createSong(char name[]) {
    struct Song *newSong = (struct Song *)malloc(sizeof(struct Song));
    strcpy(newSong->name, name);
    newSong->prev = NULL;
    newSong->next = NULL;
    return newSong;
}

void addSong(char name[]) {
    struct Song *newSong = createSong(name);
    if (head == NULL) {
        head = newSong;
        current = head;
    } else {
        struct Song *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newSong;
        newSong->prev = temp;
    }
    printf("Song \"%s\" added to playlist.\n", name);
}

void deleteSong(char name[]) {
    struct Song *temp = head;
    while (temp != NULL && strcmp(temp->name, name) != 0)
        temp = temp->next;

    if (temp == NULL) {
        printf("Song not found!\n");
        return;
    }

    if (temp == head)
        head = temp->next;
    if (temp->prev)
        temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;

    if (current == temp)
        current = temp->next ? temp->next : temp->prev;

    printf("Song \"%s\" deleted from playlist.\n", temp->name);
    free(temp);
}

void playCurrent() {
    if (current == NULL)
        printf("Playlist is empty.\n");
    else
        printf("Now Playing: %s\n", current->name);
}

void playNext() {
    if (current == NULL) {
        printf("Playlist is empty.\n");
    } else if (current->next == NULL) {
        printf("You're at the last song. No next song.\n");
    } else {
        current = current->next;
        playCurrent();
    }
}

void playPrevious() {
    if (current == NULL) {
        printf("Playlist is empty.\n");
    } else if (current->prev == NULL) {
        printf("You're at the first song. No previous song.\n");
    } else {
        current = current->prev;
        playCurrent();
    }
}

void displayPlaylist() {
    struct Song *temp = head;
    if (temp == NULL) {
        printf("Playlist is empty.\n");
        return;
    }
    printf("Playlist:\n");
    while (temp != NULL) {
        printf("-> %s\n", temp->name);
        temp = temp->next;
    }
}

int main() {
    int choice;
    char name[100];

    while (1) {
        printf("\n===== Music Player Menu =====\n");
        printf("1. Add Song\n");
        printf("2. Delete Song\n");
        printf("3. Play Current Song\n");
        printf("4. Play Next Song\n");
        printf("5. Play Previous Song\n");
        printf("6. Display Playlist\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter song name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                addSong(name);
                break;
            case 2:
                printf("Enter song name to delete: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                deleteSong(name);
                break;
            case 3:
                playCurrent();
                break;
            case 4:
                playNext();
                break;
            case 5:
                playPrevious();
                break;
            case 6:
                displayPlaylist();
                break;
            case 0:
                printf("Exiting Music Player...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
