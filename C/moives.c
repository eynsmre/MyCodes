#include <stdio.h>
#include <stdlib.h>

#define NAME_LENGTH 35

typedef struct movies{
  char name[NAME_LENGTH];
  int year;
  double imdb;
  double myPoint;
}movies;

typedef struct list{
  movies movie;
  struct list* next;
}list;

void display_movies(list *head){
  if(head == NULL)
    return;
      
  printf("\nMovie name: %s",head->movie.name);
  printf("\nRelease date: %d",head->movie.year);
  printf("\nImdb point: %.1lf",head->movie.imdb);
  printf("\nYour point: %.1lf",head->movie.myPoint);
  printf("\n\n");
      
  display_movies(head->next);
}

void write_movie_to_file(list *head, FILE* fp) {
  if (head == NULL)
    return;

  fprintf(fp, "Movie name: %s", head->movie.name);
  fprintf(fp, "Release date: %d\n", head->movie.year);
  fprintf(fp, "Imdb point: %.1lf\n", head->movie.imdb);
  fprintf(fp, "Your point: %.1lf\n", head->movie.myPoint);
  fprintf(fp, "\n\n");

  write_movie_to_file(head->next, fp);
}

int add_new_movie(list **head){
  list* new_movie = (list*)malloc(sizeof(list));
  if (new_movie == NULL) {
    perror("Error allocating memory for new movie");
    return -1;
  }

  printf("Movie name: ");
   if (fgets(new_movie->movie.name, NAME_LENGTH, stdin) == NULL) {
    printf("Error reading movie name\n");
    return -1;
  }
  printf("Release date: ");
  if (scanf("%d", &new_movie->movie.year) != 1) {
    printf("Error reading release date\n");
    return -1;
  }
  printf("Imdb point: ");
  if (scanf("%lf", &new_movie->movie.imdb) != 1) {
    printf("Error reading imdb point\n");
    return -1;
  }
  printf("Your point to movie: ");
  if (scanf("%lf", &new_movie->movie.myPoint) != 1) {
    printf("Error reading your point\n");
    return -1;
  }

  new_movie->next = *head;
  *head = new_movie;

  return 0;
}

int main(){
  list *head = NULL;
  if (add_new_movie(&head) == 0) {
    display_movies(head);
    FILE* fp;
    fp = fopen("movies.txt", "a");  // open the file in append mode
    if (fp == NULL) {
      perror("Error opening file");
      return 1;
    }
    write_movie_to_file(head, fp);
    fclose(fp);  // close the file
 
  }
  return 0;
}

