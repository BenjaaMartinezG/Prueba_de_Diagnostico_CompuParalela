# Prueba_de_Diagnostico_CompuParalela
Resolucion a Prueba de Diagnostico de Computacion Paralela y Distribuida Semestre 1, 2020 UTEM

### Ejercicio 1
Funcion hecha en C++, que contabiliza las letras de una cadena de caracteres
```
Ejemplo 
Input: wwwwwaaadexxxxxxx
Ouput: w5a3d1e1x7
```
### Ejercicio 2
## Consulta SQL

```
SELECT 
course.name,
YEAR(courses.start_date),
AVG(evaluations.score),
MAX(evaluations.score),
MIN(evaluations.score),
STDEV(evaluations.score)
FROM 
courses, evaluations, exams
WHERE 
exams.course_fk = courses.pk AND evaluations.exam_fk = exams.pk
GROUP BY 
courses.name, YEAR(courses.start_date)
```
### Ejercicio 3
## ¿En que consiste la Exclusion Mutua?
La exclusion mutua maneja la concurrencua y esta consiste en que un solo proceso excluye temporalmente a todos los demás para usar un recurso compartido de forma que garantice la integridad del sistema.

### Ejercicio 4
## ¿Que es un socket?
Es un programa de comunicacion en donde se intercambia cualquier flujo de datos, esto va desde un Cliente a un Servidor donde se utiliza el protocolo HTTP que permite realizar e interactuar.
