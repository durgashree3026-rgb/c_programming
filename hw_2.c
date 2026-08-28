#include<stdio.h>
#include<string.h>

struct machine
{
   
   char MAC[30];
   char host_name[50];
   char ip[40];
   
 };
    
 int main()
 {
    int n;
    struct machine m[n];
    scanf("%d",&n);
    
    //read the data
    for(int i=0;i<n;i++)
    {
      printf("\nEnter the machine number:%d",i+1);
      
      printf("\nEnter the MAC address:");
      scanf("%s",m[i].MAC);
      
      printf("\nEnter the Host Name:");
      scanf("%s",m[i].host_name);
      
      printf("\nEnter the IP address:");
      scanf("%s",m[i].ip);
      
      }
      
      printf("----MENU-----\n");
      
      //Display the data
      for(int i=0;i<n;i++)
      {
         
         printf("\nMAC address:%s",m[i].MAC);
         
         printf("\nHostname:%s",m[i].host_name);
         
         printf("\nIP Address:%s",m[i].ip);
         
         }
         
         return 0;
         }
      
      
      
      
      
      
      
