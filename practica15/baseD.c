/*
Programa que crea una base de datos 
*/

#include<stdio.h>
#include<sqlite3.h>

int main(void)
{
	sqlite3 *db; //puntero de tipo sqlite3
	char *err_msg = 0; //puntero de tipo char para el error 
	int con = sqlite3_open("Becarios.db",&db); //crea la base de datos
	
	if(con != SQLITE_OK) //condicion -> si no se puede abrir, manda error
	{
		fprintf(stderr,"No se puede abrir la base de datos: %s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
		return 1;
	}

	char *sql = 	"DROP TABLE IF EXISTS Becarios;"
		    	"CREATE TABLE Becarios(id int, name TEXT, promedio REAL, procedencia TEXT);"
		    	"INSERT INTO Becarios VALUES(1, 'Jorge', 9.4, 'Facultad de Ingenieria');"
			"INSERT INTO Becarios VALUES(2, 'Diana', 9.4, 'Facultad de Ingenieria');"
			"INSERT INTO Becarios VALUES(3, 'Fernando', 9.6, 'Facultad de Ingenieria');"
			"INSERT INTO Becarios VALUES(4, 'Tovar', 8.5, 'Facultad de Ingenieria');"; //accede a la base a traves del punto para insertar
	con = sqlite3_exec(db,sql,0,0,&err_msg); //se ejecutan las sentecias sql
	
	if(con != SQLITE_OK) //si hay problem al ejecutar la sentencia anterior manda el tipo de error
	{
		fprintf(stderr, "Error:  %s\n",err_msg);
		sqlite3_free(err_msg);
		sqlite3_close(db);
		return 1;
	}
	sqlite3_close(db);//cierra la conexion
	return 0;
}
