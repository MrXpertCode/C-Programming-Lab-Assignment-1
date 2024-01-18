/* Write a C program to find the eligibility of admission for a professional course based on the following criteria: 
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
And Total in all three subject >=180 or Total in Math and physics Subjects >=130*/
#include <stdio.h>

int main() {
  
  // Declare variables for marks and totals
  int maths, physics, chemistry, total_all, total_mp;

  // Prompt user for marks in each subject
  printf("Enter marks in Maths: ");
  scanf("%d", &maths);
  printf("Enter marks in Physics: ");
  scanf("%d", &physics);
  printf("Enter marks in Chemistry: ");
  scanf("%d", &chemistry);

  // Calculate total marks in all subjects and math-physics
  total_all = maths + physics + chemistry;
  total_mp = maths + physics;

  // Check eligibility based on both sets of criteria
  if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total_all >= 180) ||
      (maths >= 65 && physics >= 55 && total_mp >= 130)) {
    printf("Congratulations! You are eligible for admission.\n");
  } else {
    printf("Sorry, you are not eligible for admission based on the criteria.\n");
  }

  return 0;
}