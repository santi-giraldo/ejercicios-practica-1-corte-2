cmake_minimum_required(VERSION 3.10)

# Nombre global del proyecto
project(ejercicios-practica-1-corte-2)

# Configurar estándar 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 1. Problema 1603: Design Parking System
add_executable(parking_system parking_system.cpp)

# 2. Problema: Armstrong Numbers
add_executable(armstrong armstrong.cpp)
target_link_libraries(armstrong m) # Librería matemática para pow()

# 3. Problema: Hamming Distance
add_executable(hamming hamming.cpp)

# 4. Problema: Space Age
add_executable(space_age space_age.cpp)

