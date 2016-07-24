/*program: Tower of Hanoi
Author: Rachana Banjade
Roll no:521
Reference:Data structure using C and C++ */

#include<stdio.h>
void towers(int , char, char, char);
void main()
{
int n;
scanf("%d",&n);
towers(n, 'A' ,'C' ,'B');
}
 
 void towers(int n, char frompeg, char topeg ,char auxpeg)
 {
 	/* If only one disk ,make the move and return. */
 	if(n==1) {
 		printf("\n%s%c%s%c" , "move disk 1 from peg ", frompeg, "to peg ", topeg);
 		return;
	 }
	 /*Move top n-1 disks from A to B,using C as */
	 /*auxialiary*/
	 towers(n-1, frompeg, auxpeg, topeg);
	 /*move remaining disk from A to C */
	 printf("\n%s%d%s%c%s%c", "move disk ", n, "from peg ",frompeg,"to peg ",topeg);
	 /*Move n-1 disk from B to C using A as */
	 towers(n-1,auxpeg, topeg, frompeg);
 }

