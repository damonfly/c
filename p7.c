//#include<stdio.h>
//int main()
//{
//  double score[][4]={{60.0, 70.0, 80.5, 90.5}, {56.5, 89.5, 67.0, 88.0}, {34.2,78.5, 90.5, 67.7}};
//  int find_low(double (*pointer)[4]);
//  find_low(score);
//  return 0;
//
//}
//
//int find_low(double (*pointer)[4])
//{
//  double *pt;
//  int i, j , n ;
//  for(n=0; n<3; n++)
//  {
//    pt = *(pointer + n);
//    for(i=0; i<4; i++)
//    {
//      if( *(pt+i) < 60)
//      {
//        printf("Student (id = %d) is not pass!\nhis score is: ", n);
//          for(j=0; j<4; j++)
//        {
//          printf("%5.2f\t", *(pt+j));
//        }
//        printf("\n");
//        break;
//      }
//    }
//  }
//  return 0;
//}
