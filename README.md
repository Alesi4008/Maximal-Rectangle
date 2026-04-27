## PC2 - CC232

### Estudiante
- Nombre: Cabello Quevedo Yaimar Alexis
- Código: 20244712D
- Problema asignado: 7. LeetCode 85 - Maximal Rectangle
- Enlace: https://leetcode.com/problems/maximal-rectangle/

### Referencia oficial
- Archivo de asignación:
 https://github.com/kapumota/CC-232/blob/main/Practicas/Practica2_CC232/Problemas-Evaluacion2.csv

### Tema principal
- Semana:
- Estructura o técnica principal: Arreglos Dinámicos y Pila Monotónica (Monotonic Stack).

### Resumen de la solución
El problema se resuelve tratando cada fila de la matriz binaria como la base de un histograma. Por cada fila, se actualiza un arreglo de alturas acumuladas (si la celda es '1', la altura suma 1; si es '0', la altura se reinicia a 0). Luego, se aplica el algoritmo de "Largest Rectangle in Histogram" utilizando una Pila Monotónica para encontrar el área máxima en tiempo lineal para esa fila. El área máxima global es el máximo de todas las filas.

### Complejidad
- Tiempo: O(n \times m)$ donde n es el número de filas y m el número de columnas. Cada elemento entra y sale de la pila como máximo una vez.
- Espacio: $O(m)$ para almacenar el arreglo de alturas de la fila actual y la pila monotónica.

### Invariante o idea clave
El invariante principal recae en la Pila Monotónica: la pila siempre almacena los índices de las columnas de tal manera que las alturas correspondientes a esos índices están en orden estrictamente creciente. Esto garantiza que podamos calcular el límite izquierdo y derecho de cualquier rectángulo en expansión.

### Archivos relevantes
- include/
  -maximal_rectangle.h
- src/
  -maximal_rectangle.cpp
- tests/
- demos/
- docs/
  -Actividad1_semana1.md
  -Actividad2_semana2.md
  -Actividad3_semana3.md
- CMakeLists.txt
- README.md

### Compilación
```bash
cmake -G "MinGW Makefiles" -S . -B build
cmake --build build
```

### Ejecución
```bash
.\build\maximal_rectangle.exe
```

### Casos de prueba
Describe al menos 3 casos:
1. Matriz estándar con rectángulos internos de '1's.
2. Matriz completamente vacía o con un solo elemento ('0' o '1').
3. Matriz llena únicamente de '0's (el área máxima debe ser 0).

### Historial de commits
El historial completo que demuestra el proceso de desarrollo en días distintos se mostrará detalladamente durante la sustentación en video.
### Declaración de autoría
Declaro que entiendo el código entregado, que puedo explicarlo, compilarlo, ejecutarlo y modificarlo sin ayuda externa durante la grabación.