#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void swap_max(int arr[],int l,int n) {
int max=0,temp=n;
  for(int i=n;i<l;i++) {
  if(arr[i]>arr[temp]) {
  temp=i;
  }
  }
  max = arr[temp];
  arr[temp] = arr[n];
  arr[n] = max;
}

void ssort(int arr[],int l) {
for(int i=0;i<l;i++) {
swap_max(arr,l,i);
}
}
  
