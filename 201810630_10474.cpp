/*-------------------------------------------------------------------------*/
/* Filename : 201810630_10474.cpp*/
/* Description : Find x in nth list.  */
/* Author : Jon Ariel N. Maravilla */
/* Course and Year : BSCS - 2 */
/* Last Modified : March 2, 2020 */
/* Honor Code : This is my own code. I have worked hard in completing */
/* this work and I have not copied from any unauthorized */
/* resource. I am also well aware of the policies */
/* stipulated in the college student handbook regarding */
/* academic dishonesty. */
/*-------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

int main(){

    // run program until n = 0 and q = 0
    int j = 1;
    while(true){
        
        int A[10001] = {0};
        
        int n, q;
        cin >> n >> q;
        
        //breaking system
        if(n==0 && q == 0)
            break;
        
        cout << "CASE# " << j << ":" << endl; 
        
        // use to determine the min and max value in the array so that it run less
        int min = 10000;
        int max = 0;
        
        // loop to enter n elements in array
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            A[k] = A[k] + 1;
        
            if(k < min)
                min = k;
            if(k > max)
                max = k;
        
        }
        
        //determine the index of mth element in array to be use in my search
        int index = 1;
        for(int m = min; m <= max; m++){
        
            
            int current = A[m];
            for(int z = 0; z < current; z++){
                if(z == 0){
                    A[m] = index;
                }
                index++;
            }
        
        }
        // loop to enter queries
        while(q--){
        
            int x;
            cin >> x;
          
             // search algorithm
            if(A[x] == 0)
                cout << x << " not found" << endl;
            else
                cout << x << " found at " << A[x] << endl;
        
        }
        j++;
    
    }

    return 0;
}
