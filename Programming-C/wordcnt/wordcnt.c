#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
void wordcnt()
{
    char c; //输入字符
    char prev; //读入的前一个字符
    long n_chars; //字符数
    int n_lines; //行数
    int n_words; //单词数
    int p_lines; //不完整的行数
    bool inword = false; //如果c在单词中，inword等于true
    
    printf("Enter text to be analyzed (| to terminate):\n");
    while((c=getchar())!='|')
    {
        n_chars++;
        if(!isspace(c)) 
        {
            inword = true;
        }
    }
    printf("%d", n_chars);
}
            
    
