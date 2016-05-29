/*************************************************************************
	> File Name: file3_jpg.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 六  5/28 10:54:36 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
    FILE *f_pic, *f_file, *f_finish;
    char ch, pic_name[20], file_name[20], finish_name[20];

    printf("请输入需要合成的图片和文件的名称：\n");
    printf("图片：");
    scanf("%s", pic_name);
    printf("文件：");
    scanf("%s", file_name);
    printf("目标文件名：");
    scanf("%s", finish_name);

    if( !(f_pic = fopen(pic_name, "rb")) )
    {
        printf("%s open failure!", pic_name);
        return 0;
    }
    if( !(f_file = fopen(file_name, "rb")) )
    {
        printf("%s open failure!", file_name);
        return 0;
    }
    if( !(f_finish = fopen(finish_name, "wb")) )
    {
        printf("%s open failure !", finish_name);
        return 0;
    }
    while( !(feof(f_pic)))
    {
        ch = fgetc(f_pic);
        fputc(ch, f_finish);
    }
    fclose(f_pic);

    while( !(feof(f_file)) )
    {
        ch = fgetc(f_file);
        fputc(ch, f_finish);
    }
    fclose(f_file);
    fclose(f_finish);

    return 0;
}
