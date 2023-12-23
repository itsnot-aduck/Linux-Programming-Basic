

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>

int main(void)
{
    int fileDescriptor;
    const char *path = "./demo.txt";

    fileDescriptor = open(path, O_CREAT | O_RDWR | O_APPEND, S_IRUSR | S_IXUSR | S_IWUSR);
    if (fileDescriptor > -1)
    {
        printf("The file \" %s \" has been created\n", path);
        write(fileDescriptor, "Hello", 5);    
    } 
    else
    {
        printf("Open file \"%s\" error!\n", path);
    }

    lseek(fileDescriptor, 0, SEEK_SET);
    write(fileDescriptor, " Hello2", 7);    
    write(fileDescriptor, " Hello3", 7);  
    
    close(fileDescriptor);

    return 0;
}