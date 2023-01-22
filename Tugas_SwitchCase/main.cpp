#include <stdio.h>

//M.REYHAN AULIA T. PPLG X-1

using namespace std;

int main()
{


int day;

printf("masukan angka 1-6: ") ;
scanf("%d", &day);

switch (day) {
  case 0:
    printf("Hari Minggu");
    break;
  case 1:
    printf("Hari Senin");
    break;
  case 2:
    printf("Hari Selasa");
    break;
  case 3:
    printf("Hari Rabu");
    break;
  case 4:
    printf("Hari Kamis");
    break;
  case 5:
    printf("Hari Jum'at");
    break;
  case 6:
    printf("Hari Sabtu");
    break;
  default:
  break;
}

}

