//while loop

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 20;//intilization
//     int count = 1;

//     while (count <= n) {//condition
//         cout << count << " ";
//         count++;//updation
//     }
//     cout << endl;
//     return 0;
//}

//problem 1

// #include<iostream>
// using namespace std;
// // int main(){
//     int n = 50;
//     int i = 1;
//     int oddsum = 0;

//     while(i <=n){
//     if(i % 2 != 0){
//         oddsum +=i;
//     }
//     i++;
// }

// cout << "odd sum = " << oddsum << endl;
// return 0;
// }


// for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for(int i=1; i<=n; i++){
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// problem 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n=50;
//     int sum=0;

//     for(int i=1 ;i<=n; i++){
//         sum+=i;
//         if(i== 5)
//         break;
//     }
// cout << "sum = " << sum << endl;
// return 0;
// }

// problem 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int oddsum = 0;

//     for( int i=1; i<=n; i++){
//         if(i % 2 !=0){
//             oddsum += i;
//         }
//     }
//     cout << "odd sum = " << oddsum << endl;
//     return 0;
// }


// do while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int i = 1;

//     do {
//         cout << i <<" ";
//         i++;

//     }while( i <= n);
//     cout << endl;
//     return 0;

// }

// problem 1

// #include<iostream>
// using namespace std;
// int main(){

//     int n = 8;
//     bool isPrime = true;
//     for( int i= 2; i <= n-1; i++ ){
//         if ( n % 2 == 0){
//         isPrime = false;
//         break;
//         }
//     }
//     if(isPrime == true){
//         cout << "prime \n";
//     } else {
//         cout << "non prime \n";
//     }
//     return 0;
// }

// nested loop ( loop inside loop)

//  #include<iostream>
//  using namespace std;

//  int main(){
//     int n =10;
//     for(int i =1; i<=n; i++){
//         int m =10;
//         for( int j =1; j<=m; j++){
//         cout << "*" ;
//         }
//         cout << endl;
//     }
//    return 0;
// }

// problem 0.1

// #include<iostream>
// using namespace std;

// int main(){
//     int n =10;
//     int sum = 0;
//     for(int i =1; i<=n; i++){
//         if(i %3 == 0){
//         sum +=i;
//         }
//     }
//     cout << "sum of no. divisible by 3 is " << sum << endl;
//     return 0;

// }

// problem 0.2

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     long fact = 1;

//     for( int i =1; i<=n; i++){
//         fact = fact * i;
//     }
//     cout << "factorial of the given no. is " << fact << endl;
//     return 0;
// }





