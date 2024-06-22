#include <iostream>
using namespace std;



int main(){
    
    // cout<<"HELLO LOVE ";
    // int a, b;
    // cin>>a>>b;
    // if((a^b) == 0){
    //     cout<<"both are same number. "<<(a^b)<<endl;
    // }
    // else{
    //     cout<<"both are different number. "<<(a^b)<<endl;
    // }

    // int x = 7, y = 9;
    // cout<<"\n";
    // cout<<"AND bitwise operator: "<< (x & y) <<endl;
    // cout<<"OR bitwise operator: "<< (x | y) <<endl;

    // int num = 1;
    // // bool num = 1;  // same thing will happen i.e. answer = -2
    // cout << ~num <<endl;
    // cout << (~num) <<endl;
    // cout << ~(num) <<endl;
    /*
    answer = -2 because 
    1 = 00000000 00000000 00000000 00000001
    ~1 = 11111111 11111111 11111111 11111110
    to read this binary code:
    we have to check left most digit if it is 1 than its -ve number and if its 0 than it is +ve number
    so here left most digit = 1 and its a -ve number:
    to read it again, if it was +ve than we have to just find the decimal number & if its -ve than we have to first find 2's complement than read decimal value with -sign
    so here 2's complement of ~1 =  1's complement + 1
                              ~1 =  0000000 00000000 00000000 00000001 + 1 
                              ~1 =  10000000 00000000 00000000 00000010 == -2
    */
   /*
   left shift operators (<<) :  left most digit eliminate and '0' added in right most place and new value == old value x pow(2,n)
   right shift operators (>>) :  right most digit eliminate and '0' added in left most place and new value == old value / pow(2,n)
   */

    // cout<<endl<<endl;
    // int p = 5;
    // cout<<"P: "<<(p << 1 )<<endl;
    // cout<<"P: "<<(p << 2 )<<endl;
    // int q = 20;
    // cout<<"Q: "<<(q >> 1)<<endl;
    // cout<<"Q: "<<(q >> 2)<<endl;

    // int r = -100;
    // cout<<"ans = "<<(r >> 1)<<endl;
    // unsigned int r1 = -100;
    // cout<<"ans1 = "<<(r1 >> 1)<<endl;

    
    // int h = 7;
    // cout<<h<<endl;
    // h++;
    // h--;
    // cout<<++h<<endl;
    // cout<<h++<<endl;
    // cout<<h<<endl;
    // cout<< ((++h) * (h++))<<endl;
    // cout<< h++ * ++h<<endl;

    // set bit means 1 not 0 in bitwise representation
    

    return 0;
}


// #include <iostream>
// using namespace std;



// int main(){
    
//     int n;
//     cin>>n;
//     int rem, count = 0;
//     while(n){
//         if(n % 2 == 1){
//             ++count;
//         }
//         n /= 2;
//     }
//     cout<<count<<endl;


//     // when we do perform and operation with any number with 1 then it will give either 0 or 1 which will be equals to least significant bit of binary representation of that number
//     int n1;
//     cin>>n1;
//     int count1 = 0;
//     while(n1){
//         if(n1 & 1 == 1){
//             count1++;
//         }
//         n1 = n1>>1;
//     }
//     cout<<count1<<endl;
        
//     return 0;
// }


// #include <iostream>
// using namespace std;



// int main(){
    
//     int num;
//     cin>>num;
//     int rem, rev = 0;
//     while(num){
//         rem = num % 10;
//         rev = rev * 10 + rem;
//         num /= 10;
//     }

//     while(rev){
//         cout<<rev % 10<<"\t";
//         rev = rev / 10;
//     }
    
//     return 0;
// }