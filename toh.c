#include <stdio.h> 
#include<conio.h> 
void toh(int, char, char, char); 
int count=0; 
int main() 
{ 
char source='S',temp='T',dest='D'; 
int n;  
printf("Enter the number of disks : "); 
scanf("%d", &n); 
printf("The sequence of moves involved in the Tower of Hanoi are :\n"); 
toh(n, source, temp,dest); 
printf("The number of moves%d",count); 
return 0; 
} 
void toh(int n, char source, char temp, char dest) 
{ 
// Base Condition if no of disks are 
if (n > 0) 
{ 
toh(n-1, source,dest,temp); 
printf("\n Move disk %d %c->%c\n", n,source,dest); 
count++; 
toh(n-1, temp,source,dest); 
}
}