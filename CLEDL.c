//LEDL port to C for study sake
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>


//Checks if volume is available
//TODO
int checkVolume(char *path){
    DIR* dir = opendir(path);
    if(dir){
        closedir(dir);
        return 0;
    }else if(ENOENT == errno){
        return 1;
    }else {
        return 2;
    }
}

int main(){
    if(checkVolume("/Volumes/Data/Shared") == 0){
        printf("\n\nVolume is present!");
    }else if(checkVolume("/Volumes/Data/Shared") == 1){
        printf("\n\nVolume is not present!");
    }else{
        printf("\n\nSomething went wrong with checking Volume presence.");
    }

    printf("\nWhich category do you want to download?");
    printf("\n[1] movies");
    printf("\n[2] series");

    return 0;


}

