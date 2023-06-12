#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("./1.txt", "w");
    if (NULL == fp) {
        perror("1.txt file is fopen error!\n");
        return -1;
    }

    int n = fgetc(fp);
    printf("n = %d\n", n);
    printf("len = %ld\n", fp->_IO_buf_end - fp->_IO_buf_base);
    printf("fopen success!\n");
    fclose(fp);         // 关闭流指针
    fputc(fgetc(stdin), stdout);
    fputc('\n', stdout);
    return 0;
}