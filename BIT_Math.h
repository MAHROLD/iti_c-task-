/**************************************/
/*Description : bit math Lib    */
/*Author : abo elnour                 */
/*Versio : 0.1v                       */
/*Date : 11 Nov 2022                  */
/**************************************/


#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(reg , bitNo) ((reg) | (1<<(bitNo)))
#define CLR_BIT(reg , bitNo) (reg &(~ ( 1 << (bitNo-1))))
#define GET_BIT(reg , bitNo) (reg >> bitNo) & 1
#define TGL_BIT(reg , bitNo) (reg ^ (1 << (bitNo-1)))


#endif
//assigmnet define the rest and test them