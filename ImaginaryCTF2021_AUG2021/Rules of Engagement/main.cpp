#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<algorithm>
#include<vector>
#define pi 2*acos(0.0)
#define LL long long
#define rept(i,a,b,c) for(LL i=(a);i<(b);i+=(c))

using namespace std;

int arr[] = {328125, 309375, 3712, 3264, 384375, 221875, 1536, 1536, 3200, 296875, 2752, 303125, 3648, 153125, 303125, 3136, 3456, 159375, 296875, 2496, 303125, 340625, 159375, 359375, 296875, 2624, 296875, 2688, 3328, 159375, 328125, 3648, 296875, 1536, 371875, 3520, 296875, 2624, 159375, 371875, 303125, 3648, 3200, 390625};
int main() {
    for (int i=0; i < 5; i++) {
        for (int j =0; j < 44; j++) {
           if (arr[j] % 2 == 0) {
                arr[j] = arr[j] >> 1;
            } else if (arr[j] % 5 == 0) {
                arr[j] /= 5;
            } else if (arr[i] % 3 == 0) {
                arr[j] += 8;
            } else {
            }
            cout << (char) arr[j];
        }
        cout << endl;



    }
}
