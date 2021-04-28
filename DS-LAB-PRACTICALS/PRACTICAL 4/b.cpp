//Solving Tower of Hanoi problem with n disks

//STL library
#include<bits/stdc++.h>
using namespace std;

// Recursive function to determine the moves of rings among rods
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 

{ 
    // base case
    if (n == 1) 

    { 
     
        cout << "\n Move disk 1 from rod "<< from_rod<<" to rod " << to_rod <<endl; 

        return; 

    } 
    // calling itself (recursive call) with diff parameters
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 

    cout << "\n Move disk " << n << " from rod" <<from_rod << " to rod " << to_rod<<endl; 
    // calling itself (recursive call) with diff parameters
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 

} 


//Driver function
  int main() 

{ 
    int n;
    cin >> n; // Number of disks 

    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 

    return 0; 

}  
