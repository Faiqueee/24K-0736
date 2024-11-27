#include <stdio.h>
#include <string.h>
void reverse(char str[], int length){
    if(length<0) return;
    printf("%c",str[length]);
    return reverse(str,length-1);
}


int main() {
    int n;
    printf("Enter size of string : \n");
    scanf("%d",&n);
    char str[n];
    printf("Enter string : \n");
    getchar();
    fgets(str, sizeof(str), stdin);
    printf("Non reversed string is :\n%s",str);
    int length=strlen(str);
    printf("Your reversed string is : ");
    reverse(str,length);
    
    return 0;
}