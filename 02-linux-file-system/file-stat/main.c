/*******************************************************************************
 *
 * Copyright (c) 2023
 * 
 * All Rights Reserved
 *
 * Description: Lab2.1
 *
 * Author: DucHM
 *
 * Last Changed By:  $Author: DucHM $
 * Revision:         $Revision: 1.0 $
 * Last Changed:     $Date: 23 Dec 2023 $
 *
 ******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * Url(s) for ref function
 * https://man7.org/linux/man-pages/man2/open.2.html
 * https://pubs.opengroup.org/onlinepubs/7908799/xsh/stat.html
*/

int main(){
    const char *path = "./demo.txt";    
    struct stat fileStat;
    /* Obtain information about the file */
    stat(path, &fileStat);

    /* Open file */
    int fileDescriptor = open(path, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR | S_IXUSR);

    if (fileDescriptor > -1){
        write(fileDescriptor, "Hello World", 11);
    }
    else{
        printf("Creating file in \"%s\" error!\n", path);
    }
    
    /* Print the file information */
    printf("File name: \t%s \n", path);
    printf("File type: \t");
        switch (fileStat.st_mode & S_IFMT) {
        case S_IFBLK:   printf("block device\n");       break;
        case S_IFCHR:   printf("character device\n");   break;
        case S_IFDIR:   printf("directory\n");          break;
        case S_IFIFO:   printf("FIFO/pipe\n");          break;
        case S_IFLNK:   printf("symlink\n");            break;
        case S_IFREG:   printf("regular file\n");       break;
        case S_IFSOCK:  printf("socket\n");             break;
        default:        printf("unknown?\n");
    }  
    printf("File I-node number    : %ld\n", fileStat.st_ino);
    printf("File Size             : %ld\n", fileStat.st_size);
    printf("Last access           : %s\n", ctime(&fileStat.st_atim.tv_sec));
    printf("Last status change    : %s\n", ctime(&fileStat.st_mtim.tv_sec));
    printf("Last file modification: %s\n", ctime(&fileStat.st_ctim.tv_sec));

    /*Close file*/
    close(fileDescriptor);
    return 0;
}