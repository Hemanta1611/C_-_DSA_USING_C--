// #include <stdio.h>

// int main(){

// for(int i=1 ; i<=5; i++){
//     if( i == 3 ){ // skip
//         continue;
//     }
//     printf("%d\n", i);
// }

//     return 0;
// }

// #include <stdio.h>
// // Print all the ODD numbers from 5 to 50
// int main(){

    // for( int i = 5 ; i<=50; i++){
    //     if(i % 2 == 0){
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }


//     return 0;
// }

#include <stdio.h>

int main(){

    for(int i = 5; i<= 50; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}