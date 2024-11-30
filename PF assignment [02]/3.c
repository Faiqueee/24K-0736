#include <stdio.h>
#include <string.h>
int main() {    
    
    int n;
    printf("Enter number of words : ");
    scanf("%d",&n);
    
    
    char str[n][100];
    
     for(int i=0;i<n;i++){
         printf("Enter word no. %d : ",i);
         scanf("%s",str[i]);
     }
     for(int i=0;i<n;i++){
         printf("%d uncompressed word is : %s\n",i,str[i]);
         
     }
     
     int length[n];
     
     for(int i=0;i<n;i++){
         
        length[i]=strlen(str[i]);
        printf("Length of word %d is : %d\n",i,length[i]);
     }
  
  
  
 for(int i=0;i<=length[i];i++){
     for(int x=0;x<=length[i];x++){
         for(int j=1;j<=length[i];j++){
             
             if(str[i][x]==str[i][j]){
                 for(int k=j;k<length[i];k++){
                 str[i][k]=str[i][k+1];
             }
             
         }
     }
     }
     }
     for(int i=0;i<n;i++){
         printf("%d compressed word is : %s\n",i,str[i]);
     }
     
    return 0;
}
