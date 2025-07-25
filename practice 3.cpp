//nested loops.

// 1.	Use nested for loops to find all pairs of numbers (i,j) where i+j=10 (i,j from 1 to 10)."
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         for(int j=1;j<=10;j++){
//             if(i+j==10){
//                 cout<<"the pair is ("<<i<<", "<<j<<") making 10."<<endl;
//             }
//         }
//     }
//     return 0;
// }

//2.	Use nested for loops to calculate the sum of elements in a 3x3 matrix.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     cout<<"enter numbers for 3*3 matrix"<<endl;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             sum=sum+j;
//         }
//     }
//     cout<<"the sum of all elements in the matrix is "<<sum<<endl;
//     return 0;
// }

//3.	Write nested for loops to print a pattern: *****, ****, ***, **, *.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 4.	Implement nested for loops to find the transpose of a 4x4 matrix.
// #include <iostream>
// using namespace std;
// int main() {
//     cout<<"order of matrix"<<endl;
//     for (int i = 1; i <= 4; i++) {
//         for (int j = 1; j <= 4; j++) {
//             cout<<i*10+j<<" ";
//         }
//         cout<<endl;
//     }
//     cout << "Transpose of the matrix is:" << endl;
//     for (int j = 1; j <= 4; j++) {
//         for (int i = 1; i <= 4; i++) {
//            cout<<i*10+j<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 5.	Write nested for loops to print a pattern: 54321, 4321, 321, 21, 1.
// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 5; i>=1;i--){
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     //other way to print the pattern.
//         cout<<"other way to print the pattern"<<endl;
//         for (int i = 5; i >=1;i--){
//             for(int j=5;j>i;j--){
//                 cout<<" ";
//             }
//             for(int j=i;j>=1;j--){
//                 cout<<j;
//             }
//             cout<<endl;
//         }
//         return 0;
// }

// 6.	Implement nested for loops to calculate the product of elements in a 3x4 matrix.
// #include<iostream>
// using namespace std;
// int main() {
//     int product =1;
//     for (int i = 1; i<=3;i++){
//         for(int j=1;j<=4;j++){
//             product*=j;
//         }
//         cout<<endl;
//     }
//     cout<<"the product of the elements is "<<product;
//     return 0;
// } 

//7.	Use nested for loops to print a 5x5 upper triangular matrix.
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             if (j >= i) {
//                 cout << (i*10+j)<<" ";
//             } else {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

//8.    Create nested for loops to check if a 3x3 matrix is symmetric.
// #include<iostream>
// using namespace std;
// int main() {
//     bool issymt = true;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             int element =i*10+j;
//             int transpose = j*10+i;
//             if(i<=j&&element!=transpose){
//                 issymt = false;
//             }
//         }
//     }
//    cout<<(issymt?"symtrix":"   not a symtix")<<endl;
//     return 0;
// }

// 9.	Use nested for loops to print a pattern: 1, 22, 333, 4444, 55555.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int space=5; space>i;space--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// 10.	Write nested for loops to find the sum of all elements in a 4x4 matrix diagonal.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             if(i==j){
//                 sum+=i*10+j;
//         }
//     }
// }
// cout<<"the sum of diagonal elements is "<<sum;
// return 0;
// }

// 11.	Write nested for loops to calculate the number of elements in a 5x5 matrix greater than 10.
// #include<iostream>
// using namespace std;
// int main(){
//     int count = 0;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if((i*10+j)>10){
//                 count++;
//             }
//         }
//     }
//     cout<<"the number of elements greater than 10 is "<<count;
//     return 0;
// }

//12.	Use nested for loops to print a pattern: 12345, 1234, 123, 12, 1.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//13.	Write nested for loops to find the maximum element in a 3x3 matrix.
// #include<iostream>
// using namespace std;
// int main(){
//     int max=0;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             int element=i*10+j;
//             if(element>max){
//                 max=element;
//             }
//         }
//         cout<<endl;
//     }
//     cout<<"the maximum element is "<<max;
//     return 0;
// }

//14.	Implement nested for loops to print a 5x5 matrix with alternating 1s and 0s.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             cout<<(i+j)%2<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//15.	Use nested for loops to print a pattern: 11111, 2222, 333, 44, 5.
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
