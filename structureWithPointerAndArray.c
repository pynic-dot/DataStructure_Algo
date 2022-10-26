#include <stdio.h>
#include <stdlib.h>

struct studentDetails
{
  /* data */
  int enrollNumber[2];
  char studentName[200];
  char program[200];
};

void funcStudentDetails(struct studentDetails sd)
{
  int *enNum, i = 0;
  char *stName, *progm;

  enNum = (int *)malloc((sizeof(sd.enrollNumber) / sizeof(sd.enrollNumber[0])) * sizeof(enNum));
  stName = (char *)malloc((sizeof(sd.studentName) / sizeof(sd.studentName[0])) * sizeof(stName));
  progm = (char *)malloc((sizeof(sd.program) / sizeof(sd.program[0])) * sizeof(progm));

  while (i < (sizeof(sd.enrollNumber) / sizeof(sd.enrollNumber[0])))
  {
    printf("\n\nEnter the Enrollment Number of student No. : %d\n", i + 1);
    scanf("%d", &enNum[i]);
    printf("\nEnter the Full Name of student No. : %d\n", i + 1);
    scanf("%s", &stName);
    printf("\nEnter the Program Code of student No. : %d\n", i + 1);
    scanf("%s", &progm);
    i++;
  }
  i = 0;
  while (i < (sizeof(sd.enrollNumber) / sizeof(sd.enrollNumber[0])))
  {
    printf("\nEnrollment Number : %d", enNum[i]);
    printf("\nStudent Full Name : %c", stName[i]);
    printf("\nProgram Code : %c", progm[i]);
    i++;
  }
}

// void getStudentDetails(struct studentDetails sd)
// {
//   int *enNum, i = 0;
//   char *stName, *progm;
//   enNum = sd.enrollNumber;
//   stName = sd.studentName;
//   progm = sd.program;
//   while (i < (sizeof(sd.enrollNumber) / sizeof(sd.enrollNumber[0])))
//   {
//     printf("\nEnrollment Number : %d", enNum[i]);
//     printf("\nStudent Full Name : %s", stName[i]);
//     printf("\nProgram Code : %s", progm[i]);
//     i++;
//   }
// }

int main()
{

  struct studentDetails sd;
  funcStudentDetails(sd);
  // getStudentDetails(sd);
  return 0;
}
