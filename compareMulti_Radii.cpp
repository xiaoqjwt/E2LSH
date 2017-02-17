/*
 *
 *  This program is used for compare results from LSH and exact files in multi-radius.
 *
 */

 #include <stdio.h>
 #include <stdlib.h>

 #include "headers.h"

 void multi_usage(char *programName)
 {
     printf("Usage: %s correct_output lsh_output\n", programName);
 }

 IntT main(IntT nargs, char **args)
 {
     if(nargs < 2)
     {
         multi_usage(args[0]);
         exit(1);
     }

     FILE *fCorrect = fopen(args[1], "rt");
     FAILIF(fCorrect == NULL);
     FILE *fLSH = fopen(args[2], "rt");
     FAILIF(fLSH == NULL);

     IntT nTotalCorrect = 0;
     IntT nTotalLSH = 0;
     IntT overallOK = 1;

     IntT nPoints;
     IntT nRadii;
     fscanf(fCorrect, "nPoints = %d\n", &nPoints);
     fscanf(fCorrect, "nRadius = %d\n", &nRadii);


 }
