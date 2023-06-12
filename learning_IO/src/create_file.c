// 创建一个文件

/**
 * FILE fopen(const char path, const char mode);
 * 功能：   打开文件
 * 参数：
 *         - path：带路径的文件名， 
 *         - mode：打开方式  r只读， w只写
 * 返回值： 成功返回FILE指针。失败返回NULL
 * 
 * FILE系统会自动为使用的文件在内存中开辟一片空间，来存储该文件的详细信息，这个空间的类型为FILE结构体，该结构由系统设计
 * 
 * FILE* ：流指针，在标准IO中，每次成功打开一个文件，都会返回一个流指针，这个流指针描述了一个文件，所有的标准IO都围绕着流指针来进行。
 * 
 * 
 * void perror(const char s);
 * 功能：   根据 errno 打印出错误信息
 * 参数：   @s 提示用的字符串 可以写任意字符串
 * 返回值： void
 * 
 * 
 * int fclose(FILE fp);
 * 功能：   关闭文件
 * 参数：   文件指针
 * 返回值： 成功返回0 失败返回-1
 * 
*/

#include <stdio.h>
int main(void)
{   
    FILE *fp = fopen("/home/jason/Demo_Code/learning_IO/install/1.txt", "w");
    if (NULL == fp) {
        perror("1.txt is fopen error\n");
        return -1;
    }
    printf("1.txt is fopen success!\n");

    fclose(fp);
    return 0;
}



// /*创建一个文件*/
// #include <stdio.h>
// int main(void)
// {
//     FILE *fp = fopen("/home/jason/Demo_Code/learning_IO/install/1.txt", "w");
//     if(NULL == fp)
//     {
//         perror("fopen\n");  
//         return -1;  
//     }
    
//     printf("fopen success!\n");
    
//     fclose(fp);	//关闭流指针
    
//     return 0;
// } 
