# MegaBSQtron
 42 MegaBSQ with almost 42 people

La rama principal (main) no se toca. Cada equipo tiene asignada una rama y hay que trabajar siempre sobre ellas. Solamente se hará "merge" a la principal cuando una funcionalidad esté finalizada y testeada.

No necesariamente trabajaremos todo el rato las dos personas asignadas oficialmente a cada grupo en las ramas asignadas a los mismos. La idea es que seamos un equipo al completo y que trabajemos todos juntos. Todo esto lo hablaremos y lo iremoss asignando de manera dinámica.

Requisitos.

Nombre del programa: bsq
Archivos a entregar: Makefile y todos los que sean necesarios
Argumentos de entrada: Archivo o archivos del mapa (1 o más)
Funciones autorizadas: open, close, read, write, malloc, free, exit
Se permite usar libft: Librería personalizada para incluir en ella nuestras propias funciones
¿Qué hace el programa?: Recibe un fichero (o varios por parámetro de entrada) y dentro del mismo hay que encontrar el espacio más grande, delimitado por obstáculos, donde se pueda dibujar un cuadrado. En caso de haber más de una solución habrá que utilizar el espacio que se encuentre colocado en la posición más cercana de la coordenada 0 (arriba, izquierda).

LISTADO DE CONDICIONANTES DEL PROGRAMA

1 - Recibe por parámetro de entrada un archivo que contiene el mapa a analizar.
2 - Información de la 1ª línea del mapa: Número de líneas, carácter "VACÍO", carácter "OBSTÁCULO", carácter "LLENO". Ejemplo: 19.ox -> 19 = líneas; . = VACÍO; o = OBSTÁCULO; x = LLENO
3 - Reemplazar los caracteres VACÍOS por caracteres LLENOS en el mayor cuadrado encontrado.
4 - Si existe más de una solución, se escoge la que esté situada más cerca de la coordenada 0 (arriba, izquierda).
5 - El programa debe aceptar entre 1 y n parámetros.
6 - Si se recibe más de un mapa, se debe mostrar cada solución (o mensaje de error) seguido de un salto de línea.
7 - Si no hay solución se debe mostrar un mensaje de "map error".
8 - * ESTA PARTE NO TENGO CLARO LO QUE SIGNIFICA: "Si no hay ningún argumento, tu función debe leer el cuadrado sobre la entrada estándar".
9 - Entregar el MAKEFILE que compile el proyecto, ero sin hacer relink (sin enlazar los archivos de código objeto).

DEFINICIÓN DE MAPA VÁLIDO

- Líneas todas con la misma longitud
- Tiene que existir al menos una línea y una columna.
- Salto de línea al final de cada línea.
- Primera línea (información):
                           - Sólo se utilizan los caracteres que aparezcan en ella.
                           - Mapa inválido si falta algún carácter o si hay caracteres idénticos.
                           - Los caracteres pueden ser cualquiera de los imprimibles
  - Si el mapa no es válido se muestra mensaje de error.

FLUJO DEL PROGRAMA

0. Preparar el makfile con las normas de compilación
1. Recoger el archivo o archivos introducidos por parámetro (mapa/s) *******AQUÍ PUEDE QUE HAYA QUE INCLUIR ALGO REFERENTE A LA PARTE 8 DE LAS CONDICIONES DEL PROGRAMA
2. Leer primera línea del mapa con la información y almacenarla en variables
3. Comprobar que la información contenida en la primera límea es correcta. Si no lo es = MAP ERROR
4. Comprobar que el formato del mapa sea correcto. Si no lo es = MAP ERROR. Si hay varios mapas y alguno de ellos es correcto, el error de mostrará al final, junto a la solución de los que sean correctos.
5. Si el mapa es correcto, buscar el cuadrado más grande (este apartado probablemente se dividirá en varios sub-apartados).
6. Almacenar la situación del cuadrado más grande. En caso de que exista más de una solución, se almacena la que esté más arriba a la izquierda.
7. Imprimir el cuadrado según la posición almacenada con anterioridad.

ESTRUCTURA DEL PROGRAMA Y MÓDULOS NECESARIOS

