#include <stdio.h>
#define BEGIN int main(){
#define END }
#define INTEGER int
#define IF if
#define THEN {
#define ELSE }else{
#define ENDIF }
#define PRINT printf

BEGIN
INTEGER x=10;
IF (x>=10)
THEN
	PRINT("Tengo diez\n");
ELSE
	PRINT("Reprobare\n");
ENDIF
END




