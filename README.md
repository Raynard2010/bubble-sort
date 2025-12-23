Bubble sort memiliki kompleksitas O(n²) karena ia menggunakan nested loops.

Di outer loop, worst case dari bubble sort adalah ia melakukan pass sebanyak n-1. 

Di setiap pass (inner loop), ada comparison. Di pass pertama, worst casenya adalah comparison sebanyak n-1. Di pass kedua, worst casenya adalah comparison sebanyak n-2. Di pass ketiga, n-3, dan seterusnya.


Jadi, worst case jumlah comparison yang dilakukan adalah sebanyak...

(n-1) + (n-2) + (n-3) + ... + 1

Ini sama dengan n(n-1)/2


Untuk kompleksitas algoritma, n(n-1)/2 dapat disederhanakan menjadi n².

Oleh karena itu, kompleksitas bubble sort adalah O(n²).
