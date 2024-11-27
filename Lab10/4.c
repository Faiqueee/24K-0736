#include <stdio.h>
#include <string.h>
typedef struct info{
    char title[30];
    char genre[20];
    char director[30];
    char release[30];
    int rating;
}info;

void addmovies(int n,info movie[]){

for(int i=0;i<n;i++){
getchar();    
printf("Enter movie no %d title: ",i);
getchar();
scanf("%[^\n]s",movie[i].title);
printf("Enter movie genre: ");
getchar();
scanf("%[^\n]s", movie[i].genre);
printf("Enter movie director: ");
getchar();
scanf("%[^\n]s", movie[i].director);
printf("Enter movie release date: ");
getchar();
scanf("%[^\n]s", movie[i].release);
printf("Enter movie rating: ");
scanf("%d",&movie[i].rating);

}

}
void displaymovies(int n,info movie[]){
    for(int i=0;i<n;i++){
    
printf("Movies title: %s\n",movie[i].title);
printf("Movies genre: %s\n",movie[i].genre);
printf("Movies director: %s\n",movie[i].director);
printf("Movies release date: %s\n",movie[i].release);
printf("Movies title: %d\n",movie[i].title);

}
return;
}
void searchmovie(char mov[],int n,info movie[]){
    
scanf("%[^\n]s",mov);
for(int i=0;i<n;i++){
if(strcmp(mov,movie[i].genre)==0){
    printf("Movie found : %s",movie[i].title);
    return;
}
}
}
int main() {

int n;
printf("Number of movies to be entered : ");
scanf("%d",&n);
info movie[n];
printf("1.Add movies\n2.Display Movies\n3.Search for a movie by genre");
int x;
scanf("%d",&x);
if(x==1){
int n;
printf("Number of movies to be entered : ");
scanf("%d",&n);
addmovies(n,movie);}
else if(x==2){
displaymovies(n,movie);}
else if(x==3){
char mov[30];
searchmovie(mov,n,movie);
}
else{
    printf("invalid option");
}

    return 0;
}