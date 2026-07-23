#include<stdio.h>
#include<string.h>

int main(){
    char word[20];
    char a;
    int count = 0;
    printf("Enter a word:");
    fgets(word,sizeof(word),stdin);
    printf("Enter an alphabet to check its frequency in given word:");
    word[strcspn(word,"\n")]='\0';
    scanf(" %c",&a);
    for(int i = 0; word[i] != '\0';i++){
        if(word[i] == a){
            count++;
        }
    }
    if(count == 0){
        printf("alphabet not present in given word!");
    }else{
        printf("%c appears %d times in %s.",a,count,word);
    }
    return 0;
}