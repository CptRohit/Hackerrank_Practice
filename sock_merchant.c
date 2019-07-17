#include<stdio.h>

int main(){
    int n, pair=0;
    scanf("%d", &n);
    int arr[n], cnt[101] ={0};
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;
    }
    for(int i=0;i<101;i++){
        if(cnt[i]!=0) pair+=cnt[i]/2;
    }

    printf("%d", pair);

}
