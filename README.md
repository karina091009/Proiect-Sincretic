    Problema 8 Regine


Acest proiect rezolvă problema clasică a celor 8 regine folosind un algoritm de backtracking în limbajul C++. Codul este compilat și rulat într-un container Docker.
Structura Codului
-valid(int linie, int coloana): Funcție care verifică dacă poziția (linie, coloană) este validă pentru a plasa o regină.
-tipar(): Funcție care afișează soluțiile sub forma unei table de șah cu literele "R".
-back(int linie): Funcție principală de backtracking.

Proiectul a fost dezvoltat și testat pe următoarea platformă:
- Sistem de Operare: Windows (testat pe Windows 11)
- Compilator C++: Visual C++ în cadrul Visual Studio 2022

Pentru a afisa rezultatul, rulati comanda:

    docker run karina091003/queens-app
   

