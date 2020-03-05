/*-------------------------------------------------------------------------*/
/* Filename : 201810630_12032.cpp*/
/* Description : Find minimum k step*/
/* Author : Maravilla, Jon Ariel N.*/
/* Course and Year : BSCS-2*/
/* Last Modified : March 5, 2020 */
/* Honor Code : This is my own code. I have worked hard in completing */
/* this work and I have not copied from any unauthorized */
/* resource. I am also well aware of the policies */
/* stipulated in the college student handbook regarding */
/* academic dishonesty. */
/*-------------------------------------------------------------------------*/

#include <iostream>
using std::cin;
using std::cout;


int main(){
    
    int testCases;
    int rungs;
    int rung;
    int minimumStr;
    int finalStr;
    
    cin >> testCases;
    
    for(int iteration = 1; iteration <= testCases; iteration++){
        
        // know k by getting the maximum difference between rungs
        minimumStr = 0;
        cin >> rungs;
        
        int A[rungs];
        
        int n = rungs;
        
        int firstRung = 0;
        while(rungs--){
            cin >> rung;
            A[rungs-1] = rung;
        
            int strValue = rung - firstRung;
            if(strValue > minimumStr){
                minimumStr = strValue;
            }
        
            firstRung = rung;  
            
        }
        
        
        // save the k value
        finalStr = minimumStr;
        
        // iterate n times
        firstRung = 0;
        while(n--){
            int strValue = A[n-1] - firstRung;
            
            // decrement k if strength required is equal to step
            // but when required step is > k, it means that k strength is not enough therefore, add 1
            if(strValue == minimumStr)
                minimumStr--;
            else if(strValue > minimumStr){
                finalStr++;
                break;
            }
            
            firstRung = A[n-1];

        }
        
        cout << "Case " << iteration << ": " << finalStr << "\n";
    }
    
    
    return 0;
}
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
