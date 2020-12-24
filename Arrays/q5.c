int ** generateMatrix(int A, int *len1, int *len2) {
    *len1=A;
    *len2=A;
    int **arr=(int **)malloc(A * sizeof(int *));
    int i;
    for(i=0;i<A;i++){
        arr[i]=(int *)malloc(A* sizeof(int *));
    }
    int t=0;
    int b=A-1;
    int l=0;
    int r=A-1;
    int dir=0;
    int cnt=1;
    while(t<=b && l<=r){
        if(dir==0){
            for(i=l;i<=r;i++){
                arr[t][i]=cnt;
                cnt++;
            }
            t++;
        }else if(dir==1){
            
            for(i=t;i<=b;i++){
                arr[i][r]=cnt;
                cnt++;
            }
            r--;
        }else if(dir==2){
            for(i=r;i>=l;i--){
                arr[b][i]=cnt;
                cnt++;
            }
	    b--;
        }else if(dir==3){
            for(i=b;i>=t;i--){
                arr[i][l]=cnt;
                cnt++;
            }
            l++;
        }
        dir=(dir+1)%4;
    }
    return arr;
}
