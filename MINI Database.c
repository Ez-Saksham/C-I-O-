#include<stdio.h>


int main(){
    int class,sample;
    char nme[30];
    char *name;
    name=&nme[30];
    float GPA;
    int n;


printf("ENTER 1 TO WRITE 2 TO READ \t : ");
scanf("%d",&n);

FILE *fp;


switch (n)
{
case 1:
    fp=fopen("studentsdata.txt","w");

    printf("TOTAL NUMBER OF STUDENTS \t");/*taking the number of students*/
scanf("%d",&sample);


fprintf(fp,"%s","\n \t CLASS \t NAME \t GPA \t \n");/*formating*/
for (int i = 0; i <sample; i++)
{ 
    printf("enter the name  student  \n");
    scanf("%s",&nme[30]);

    printf("enter the class of student \n");   /*USER INPUTS DATA*/
    scanf("%d",&class);

    printf("enter the GPA of student \n");
    scanf("%f",&GPA);


    
    
fprintf(fp,"\t %d \t ",class); /*saving class */

fputs(name,fp);     /*saving name */
fprintf(fp,"\t %f \t ",GPA);   /*saving gpa */
fprintf(fp,"%s","\n");   /*SPACE OR BL*/

}


fclose(fp);

/* closing the writting function*/


 break;




/*for reading*/
    case 2:

fp=fopen("studentsdata.txt","r");

char max[100]; /*to save those strings*/

while(!feof(fp))
{
    fgets(max,100,fp); /* retriving data from file*/
    puts(max);  /*printing in terminal*/
}
    break;
  
/*closing wriiting function*/


    default:
printf("choose from the given option \n");
    break;
}


return 0;
}












