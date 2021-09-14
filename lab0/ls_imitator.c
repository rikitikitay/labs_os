#include <stdio.h>
#include <dirent.h>

int main (int argc, char** argv)
{   
    DIR* dirp = opendir("."); // открываем текущую директорию
    struct dirent* direntry;
    if (dirp)  
    {
        direntry = readdir(dirp);    
    }
    while (direntry) // выводим содержимое директории
    {  
        if (direntry->d_name[0] != '.') {
            printf("%s %s",direntry->d_name, "  ");
        }
        direntry = readdir(dirp);
    }       
    return 0;
}
