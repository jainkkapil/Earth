#include<stdio.h>
long long int binary_search(long long int* A,long long int start,long long int end,long long int item){
long long int mid=(start+end)/2;
if(A[mid]==item || (A[mid]<item && A[mid+1] > item))
 return mid;
else if(A[start] >= item )
	return start;
else if(A[end] <= item )
	return end;
else if(A[mid] < item)
	return binary_search(A,mid+1,end,item);
else
	return binary_search(A,start,mid,item);
}
