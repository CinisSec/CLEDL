//LEDL port to C for study sake
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
//Checks if volume is available
void checkVolume(char *path){
    DIR* dir = opendir(path);
    if(dir){
        closedir(dir);
        printf("\n\nVolume is present!");
    }else if(ENOENT == errno){
        printf("\n\nVolume is not present!");
    }else {
        printf("\n\nSomething went wrong with checking Volume presence.");
    }
}
int moviesDL(){
    printf("\nMovies you've watched before or new ones?");
    printf("\n[1] old movies");
    printf("\n[2] new movies");
    printf("\nInput choice: [1-2]");
    int movietype;
    scanf("%d",movietype);
    if (movietype == 1)
    {
        printf("%d", movietype);
    }else if (movietype == 2)
    {
        
    }else
    {
        
    }
    printf("");
    return 0;
}
int seriesDL(){
    //TODO
    return 0;
}
int main(){
    checkVolume("/Volumes/Data/Shared");
    printf("\nWhich category do you want to download?");
    printf("\n[1] movies");
    printf("\n[2] series");
    printf("\n\nInput choice: [1-2]");
    int* category;
    scanf("%d", category);
    if (category == 1)
    {
        moviesDL();
    }else if (category == 2)
    {
        seriesDL();
    }else{
        return 0;
    }
    return 0;
}