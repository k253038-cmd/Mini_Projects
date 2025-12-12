#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100

// Structure to hold movie information
struct Movie {
    char title[50];
    char genre[20];
    char director[50];
    int releaseYear;
    float rating;
};

int main() {
    struct Movie movies[MAX_MOVIES];
    int count = 0; // Number of movies added
    int choice;

    do {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Add a new movie\n");
        printf("2. Search movies by genre\n");
        printf("3. Display all movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character after scanf

        switch(choice) {
            case 1:
                if(count >= MAX_MOVIES) {
                    printf("Movie database full!\n");
                    break;
                }
                printf("Enter movie title: ");
                fgets(movies[count].title, sizeof(movies[count].title), stdin);
                movies[count].title[strcspn(movies[count].title, "\n")] = '\0'; // Remove newline

                printf("Enter genre: ");
                fgets(movies[count].genre, sizeof(movies[count].genre), stdin);
                movies[count].genre[strcspn(movies[count].genre, "\n")] = '\0';

                printf("Enter director: ");
                fgets(movies[count].director, sizeof(movies[count].director), stdin);
                movies[count].director[strcspn(movies[count].director, "\n")] = '\0';

                printf("Enter release year: ");
                scanf("%d", &movies[count].releaseYear);

                printf("Enter rating (0.0 - 10.0): ");
                scanf("%f", &movies[count].rating);
                getchar(); // Consume newline

                count++;
                printf("Movie added successfully!\n");
                break;

            case 2: {
                char searchGenre[20];
                int found = 0;
                printf("Enter genre to search: ");
                fgets(searchGenre, sizeof(searchGenre), stdin);
                searchGenre[strcspn(searchGenre, "\n")] = '\0';

                printf("\n--- Movies in Genre '%s' ---\n", searchGenre);
                for(int i = 0; i < count; i++) {
                    if(strcmp(movies[i].genre, searchGenre) == 0) {
                        printf("Title: %s\n", movies[i].title);
                        printf("Director: %s\n", movies[i].director);
                        printf("Release Year: %d\n", movies[i].releaseYear);
                        printf("Rating: %.1f\n", movies[i].rating);
                        printf("--------------------------\n");
                        found = 1;
                    }
                }
                if(!found) {
                    printf("No movies found in this genre.\n");
                }
                break;
            }

            case 3:
                if(count == 0) {
                    printf("No movies in database.\n");
                } else {
                    printf("\n--- All Movies ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("Title: %s\n", movies[i].title);
                        printf("Genre: %s\n", movies[i].genre);
                        printf("Director: %s\n", movies[i].director);
                        printf("Release Year: %d\n", movies[i].releaseYear);
                        printf("Rating: %.1f\n", movies[i].rating);
                        printf("--------------------------\n");
                    }
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while(choice != 4);

    return 0;
}

