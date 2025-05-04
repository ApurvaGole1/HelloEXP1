/*Q1. print num array :- 
Ans:-
#include<stdio.h>
int main(){
    int  a[10];
    int n;
    printf("enter length of array: ");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf ("elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
*/

/*Q2. print string N char both array :- 
Ans:-
#include<stdio.h>
int main(){
    char  a[10][10];
    int n;
    printf("enter length of array: ");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    printf("\n");
    printf ("elements are:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
}

output:- 
enter length of array: 3
enter elements:om
adi
anant
elements are:
om
adi
anant
*/

/* NOTE:- 1. 
#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter array length: ");
    scanf("%d",&n);
    char ch[10][n];                           // WRONG OUTPUT: BECAUSE (Fixed rows = 10, variable columns = n (from user)), Each string can store up to n-1 characters,
    printf("enter string: \n");                                                     Can store up to 10 strings total, Risky if n is large : may exceed storage for each string.
    for(int i=0;i<n;i++){
        scanf("%s",ch[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s \n",ch[i]);
    }
    return 0;
} 

OUTPUT 1:-
enter array length: 4
enter string: 
aditya
om
anant
apurva
manisha
nana
aaka
mama
mami
atharv
aditom 
om 
ananapurmaninanaaakamamamamiatharv 
apurmaninanaaakamamamamiatharv 
maninanaaakamamamamiatharv 
nanaaakamamamamiatharv 
aakamamamamiatharv 
mamamamiatharv 
mamiatharv 
atharv

NOTE 2:-
#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter array length: ");
    scanf("%d",&n);
    char ch[n][10];                 // RIGHT:- BECAUSE (Variable rows = n, fixed columns = 10), Each string can store up to 9 characters + null terminator, Can store exactly  
    printf("enter string: \n");                n strings, with each up to 9 characters, Safer and more logical when the number of strings is based on user input
    for(int i=0;i<n;i++){
        scanf("%s",ch[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s \n",ch[i]);
    }
    return 0;
}

OUTPUT:-
enter array length: 3
enter string: 
aditya
om
apurva
aditya 
om 
apurva 
*/

/*Q3. print string including number and characters: 
Ans:- SOLUTION 1:-
#include <stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    printf("enter string: \n");
    scanf("%s",ch);
    printf("%s \n",ch);
    
    return 0;
}

OUTPUT 1:-
enter string: 
asd123
asd123 

SOLUION 2:-
#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter array length: ");
    scanf("%d",&n);
    char ch[n][10];
    printf("enter string: \n");
    for(int i=0;i<n;i++){
        scanf("%s",ch[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s \n",ch[i]);
    }
    return 0;
}

OUTPUT 2:- 
enter array length: 1
enter string: 
adi123
adi123 
*/
/*Q4. print matrix of integers using array :- 
Ans:-
#include<stdio.h>
#include<stdlib.h>
int main(){
    int  a[10][10];
    int n;
    printf("enter length of array: ");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("\t%d",&a[i][j]);
        }
        printf("\n");
    }
    printf ("elements are:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}

output:-
enter length of array: 2
enter elements:3 2

4
2

elements are:
        3       2
        4       2
*/

/* Q5. calculate monthly savings and expenditures on:
Ans:- 
#include <stdio.h>
#include<string.h>
#include<stdio.h>
void display(double a,double saving,double b[10],int count, char c[][10]);
int main()
{
    char ch[10],c[10][10];
    int count=0,i;
    double a, saving=0,b[10],e;

    printf("enter yout income:\n ");
    scanf("%lf",&a);
    saving= a;
    
    for(i=0;i<10;i++){
        printf("Enter expenditure category (or type 'done' to finish):\n");
        scanf("%s", ch);  
        
        if (strcmp(ch, "done") == 0) {
            break;
        }
        
        printf("enteer expenses:\n ");
        scanf("%lf",&e);

        strcpy(c[i],ch);  
        
        b[i]=e;
        saving= saving - e;
        count++;
    }
    display( a, saving, b, count,c);
return 0;
}

void display(double a,double saving,double b[10],int count, char c[][10]){

    printf("Summery:\n");
    printf("monthly income is:%.2lf \n",a);    // lf(long float) example:- %f print 4.000000 till 6 zero, %.2lf print 4.00 till two zero 
    printf("monthly saving is:%.2lf \n",saving);
    printf("expenditure list:\n");
    int i;
    for(i=0;i<=count;i++){
        printf("%s"":""%.2lf\n",c[i],b[i]);
    }
}*/

/*[ Important Note: scanf("%s",sen) {remember no space in this statement} will display string till first space to display string with space scanf(" %[^\n], sen") {remember space 
is important befor "%" and after ","}]*/

/* Q6. Size of each format spacifier or data type:
Ans 1:- Including String
#include <stdio.h>
int main() {
    int i;
    float f;
    double d;
    char c;
    char str[100];

    printf("Size of int: %lu bytes\n", sizeof(i));         //(%lu {long unsigned int})
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of char: %lu byte\n", sizeof(c));
    printf("Size of char[100] (string): %lu bytes\n", sizeof(str));

    return 0;
}
Ans 2:- Without String
#include <stdio.h>
int main() {
 

    printf("Size of int: %zu bytes\n", sizeof(int));          //(%zu {size unsigned})
    printf("Size of float: %zu bytes\n", sizeof(float)); 
    printf("Size of double: %zu bytes\n", sizeof(double)); 
    printf("Size of char: %zu byte\n", sizeof(char));  
    return 0;
}*/

/* Q7. Find Maximun number amoung 4 numbers: 
Ans:- 
#include <stdio.h>
int max_of_four( int a, int b, int c, int d){
    int max;
    if(a>b && a>c && a>d){
        max=a;
    }
    else if(b>a && b>c && b>d){
        max=b;
    }
    else if(c>a && c>b && c>d){
        max=c;
    }
    else if(d>a && d>b && d>c){
        max=d;
    }
    return max;
}
int main() {
    int a, b, c, d,sum=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum +=a;
    sum +=b;
    sum +=c;
    sum +=d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}*/

/* Q8. print star pattern: 
Ans:
#include <stdio.h>
#include<string.h>
int main()
{
    int n, count;
    printf("enter length: \n");
    scanf("%d",&n);
    count=n;
    for(int i=0;i<n;i++){
        for(int k=0;k<count;k++){
            printf(" ");
        }
        
        for(int z=0;z<i+1;z++){
            printf("*");
            
        }
        printf("\n");
        count--;
    }
    return 0;
}

Output:
enter length: 
4
    *
   **
  ***
 ****
 */
/* Q9. print patterns of char: 
Ans:
#include <stdio.h>
#include<string.h>
int main()
{
    int n, count;
    printf("enter length: \n");
    scanf("%d",&n);
    count=n;
    for(int i=0;i<n;i++){
        for(int k=0;k<count;k++){
            printf(" ");
        }
        int c=1;
        for(int z=0;z<i+1;z++){
            printf("%d",c);
            c++;
        }
        printf("\n");
        count--;
    }
    return 0;
}

Output:-
enter length: 
4
    1
   12
  123
 1234
*/

/* Q10. print patterns of char: 
Ans:- 
#include <stdio.h>
#include<string.h>
int main()
{
    int n, count;
    printf("enter length: \n");
    scanf("%d",&n);
    count=n;
    for(int i=0;i<n;i++){
        for(int k=0;k<count;k++){
            printf(" ");
        }
        char c='A';
        for(int z=0;z<i+1;z++){
            printf("%c",c);
            c++;
        }
        printf("\n");
        count--;
    }
    return 0;
}

Output:- 
enter length: 
4
    A
   AB
  ABC
 ABCD
 */
