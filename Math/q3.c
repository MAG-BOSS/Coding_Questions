int isPower(int A) {
    if(A==1){
        return 1;
    }
    int x;
    for(x=2;x<=sqrt(A);x++){
        int y=2;
        int p=pow(x,y);
        while(p<=A && p>0){
            if(p==A){
                return 1;
            }
            y++;
            p=pow(x,y);
        }
    }
    return 0;
}