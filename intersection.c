#include<stdio.h>
int search(int arr1[],int arr2[],int n,int m);
void printArray(int arr[],int size);
int main(){
           int a,b,i=0,j=0,n,m;
           printf("enter the total array1 elements : \n");
           scanf(" %d",&a);
           printf("enter the total array2 elements : \n");
           scanf(" %d",&b);
           int arr1[a],arr2[b];
           printf("1st array size of %d is created\n",a);
           printf("2nd array size of %d is created\n",b);
           n=sizeof(arr1)/sizeof(arr1[0]);
           m=sizeof(arr2)/sizeof(arr2[0]);
           if(n>0 && m>0){
                  while(i<n){  printf("enter array1 element-- >%d \n:",i+1); 
                               scanf("%d",&arr1[i]);
                               i++;
                        }
           
                  while(j<m){  printf("enter array2 element-- >%d \n:",j+1); 
                               scanf("%d",&arr2[j]);
                               j++;
                        }}
          printArray(arr1,n);
          printArray(arr2,m);
          search(arr1,arr2,n,m);
          }
int search(int arr1[],int arr2[],int n,int m){
                             
                             int i,j,w=0,z=0;
                             if(n<m){
                                    w=n;
                             }
                             else{
                                   w=m;
                             }
                             int arr3[w];
                             printf("Array of size %d is created for intersection purpose",w);
                             for(i=0;i<n;i++){
                                     for(j=0;j<m;j++){
                                            
                                            if(arr1[i]==arr2[j]){
                                                           if(z<w){  
                                                                     arr3[z]=arr1[i];
                                                                     z++;
                                                                     if(arr1[i+1]==arr1[j+1]){
                                                                                    arr3[z]=arr1[i];
                                                                      }
                                                                      break;
                                                  }
                                                
                                                  
                                                  }
                                            else{
                                                  
                                            }
                                              
                                     }
                             }
                             int s;
                             s=sizeof(arr3)/sizeof(arr3[0]);
                             printArray(arr3,s);
                             return 0;
}
void printArray(int arr[],int size){
                       int i=0;
                       while(i<size){
                                 printf("%d\t",arr[i]);
                                 i++;
                       }
                       printf("\n");

}
