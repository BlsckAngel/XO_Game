#include <stdio.h>

char table[3][3] = {{'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}};
int i,j,row=0,column=0,num,test,t,pos,stat=0,line;
char name[128];
int create_table(){
  
    printf("\n\n");
    printf ("\t\t\t %c | %c | %c \n", table[0][0],table[0][1],table[0][2]);
    printf ("\t\t\t---+---+---\n");
    printf ("\t\t\t %c | %c | %c \n", table[1][0],table[1][1],table[1][2]);
    printf ("\t\t\t---+---+---\n");
    printf ("\t\t\t %c | %c | %c \n", table[2][0],table[2][1],table[2][2]);
    printf ("\t\t\t---+---+---\n");
   
    return 0;
}
int CheckList() {
    int stat = 0;
    
    if ((table[0][0]==table[1][1] && table[0][0]==table[2][2]) ||
        (table[0][2]==table[1][1] && table[0][2]==table[2][0] )) {
        printf("Congratulation player %c is winer\n",table[1][1]);
        stat = 1;
    }
    // Check Row 1 column 1
    if ((table[0][0]==table[0][1]&&table[0][0]==table[0][2]) ||
            (table[0][0]==table[1][0]&&table[0][0]==table[2][0])) {
        printf("Congratulation player %c is winer\n",table[0][0]);
        stat = 1;
    }
    // Check Row 2 column 2
    if ((table[1][0]==table[1][1]&&table[1][0]==table[1][2]) ||
            (table[0][1]==table[1][1]&&table[0][1]==table[2][1])) {
        printf("Congratulation player %c is winer\n",table[1][1]);
        stat = 1;
    }
    if ((table[2][0]==table[2][1]&&table[2][0]==table[2][2]) ||
         (table[0][2]==table[1][2]&&table[0][2]==table[2][2])) {
        printf("Congratulation player %c is winer\n",table[2][2]);
        stat =1;
    }
    return stat;
}

int main () {
 int player = 0;
   
   printf("Welcome to XO Game\n");
    
    create_table();
   
    // POS2play
    for (i=1;i<=9;i++) {
        if (i%2==1){
            printf("X player to play\n");
            scanf("%d",&num);
            row = (--num)/3;
            column = num%3;
            table[row][column]= 'X';
            
           
        }
        else if (i%2==0){
            printf("O player to play\n");
            scanf("%d",&num);
            row = (--num)/3;
           column = num%3;
            table[row][column]= 'O'; 
         
        }
        
         create_table();
         stat =CheckList();
         if(stat==1)
         break;
    }
  
     printf("End game\n");
    
    return 0;
    
}

	
