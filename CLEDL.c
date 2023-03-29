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
        closedir(dir);
        //printf("");
        return 1;
    }else {
        return 1;
    }
    //printf("%s",path);



    return 0;
}

int main(){
    checkVolume("/Volumes/Data/Shared");

    printf("Which category do you want to download?\n");
    printf("[1] movies\n");
    printf("[2] series\n");

    return 0;


}

