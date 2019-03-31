#include<stdio.h>
struct patient
{
	char id[10];
	int age;
};
int main()
{
	struct patient p[100]={0,0};
	struct patient old[100]={0,0};
	struct patient unold[100]={0,0};
	 struct patient temp;
	 int n,i,j,k,x=0,y=0;
	 scanf("%d",&n);
	 getchar();
	 for(i=0;i<n;i++)
	 {
		 scanf("%s%d",p[i].id,&p[i].age);
	 }
	 for(i=0;i<n;i++)
	 {
         if(p[i].age>=60)
		 {
    		 old[x++]=p[i];
		 }
    	 else
		 {
    			 unold[y++]=p[i];
		 }
	 }

   	 for(i=0;i<x-1;i++)
	 {
		 k=i;
		 for(j=i+1;j<x;j++)
   			 if(old[j].age>old[k].age)
				 k=j;
		 temp=old[k];
		 old[k]=old[i];
		 old[i]=temp;
	 }
   	 for(j=0;j<x;j++)
   		 printf("%s\n",old[j].id);
   	 for(j=0;j<y;j++)
   		 printf("%s\n",unold[j].id);
 	 return 0;
}




