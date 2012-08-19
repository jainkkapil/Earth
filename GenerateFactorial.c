//
//This Programs read an array and prints the all possible subsets of it
//
main(){

 int N,i,j,arr[100];
 scanf("%d",&N);
 for(i=0;i<N;i++)
   scanf("%d",&arr[i]);
 for(i=0;i<(1<<N);i++){		//2^N times loop,generates all possible truth values
  for(j=0;j<N;j++){
   if(i&(1<<j))			//pick only those numbers whose indexes are forms the present truth value
    printf("%d ",arr[j]);
  }
  printf("\n");
 }

}
