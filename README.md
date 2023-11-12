
Include this example in the README to illustrate the expected output based on the provided input. Feel free to adjust the formatting if needed.
#### Student Sorting App with Linked Lists

#### Example Input and Expected Output

##### Input:

```
Ahmet   M
Sedat   M
Merve   F
Ayse    F
Mehmet  M
Tugce   F
Okan    M
Esra    F
Ceyda   F
Cenk    M
```

##### Expected Output:

```
Ayse    F
Ceyda   F
Esra    F
Merve   F
Tugce   F
Ahmet   M
Cenk    M
Mehmet  M
Okan    M
Sedat   M
```

This C program utilizes linked lists to manage a list of students and sorts them alphabetically by name within their gender groups. Below are detailed explanations for the key functions:

1. **`insertNode` Function:**
   - This function inserts a new student into the linked list.
   - Parameters:
     - `char *name`: The name of the student.
     - `char gender`: The gender of the student ('M' for male, 'F' for female).
     - `struct Student *list`: The current linked list.
   - The function dynamically allocates memory for a new node, assigns the student information, and inserts it at the beginning of the list.

2. **`sortList` Function:**
   - This function sorts the linked list alphabetically within each gender group.
   - Parameters:
     - `struct Student *list`: The linked list to be sorted.
   - The function separates the list into male and female sublists, sorts each sublist alphabetically by name, and then concatenates the two sublists back into a single sorted list.

3. **`printList` Function:**
   - This function prints the contents of the linked list.
   - Parameters:
     - `struct Student *list`: The linked list to be printed.
   - The function traverses the linked list and prints each student's name and gender.

#### How to Use Linked Lists:

- The `insertNode` function is responsible for adding students to the linked list. When a new student is added, it becomes the head of the list.
  
- The `sortList` function takes the linked list and sorts it alphabetically. Female names appear first, followed by male names, all in alphabetical order.
  
- The `printList` function is used to display the unsorted and sorted lists.

#### Compile and Run

Compile the program using a C compiler (e.g., gcc):

```bash
gcc main.c -o sort_students
```

Run the executable:

```bash
./sort_students
```

#### Note

Make sure you have a C compiler installed on your system.

---
#### Bağlı Liste Kullanarak Öğrenci Sıralama Uygulaması

#### Örnek Giriş ve Beklenen Çıktı

##### Giriş:

```
Ahmet   M
Sedat   M
Merve   F
Ayse    F
Mehmet  M
Tugce   F
Okan    M
Esra    F
Ceyda   F
Cenk    M
```

##### Beklenen Çıktı:

```
Ayse    F
Ceyda   F
Esra    F
Merve   F
Tugce   F
Ahmet   M
Cenk    M
Mehmet  M
Okan    M
Sedat   M
```

Bu C programı, bağlı listeleri kullanarak öğrenci listesini yönetir ve öğrencileri isme göre cinsiyet grupları içinde alfabetik olarak sıralar. İşlevlerin daha ayrıntılı açıklamaları aşağıdadır:

1. **`insertNode` Fonksiyonu:**
   - Bu fonksiyon, yeni bir öğrenciyi bağlı listeye ekler.
   - Parametreler:
     - `char *name`: Öğrencinin adı.
     - `char gender`: Öğrencinin cinsiyeti ('M' erkek, 'F' kadın).
     - `struct Student *list`: Mevcut bağlı liste.
   - Fonksiyon, yeni bir düğüm için bellek tahsis eder, öğrenci bilgilerini atar ve bu düğümü listenin başına ekler.

2. **`sortList` Fonksiyonu:**
   - Bu fonksiyon, bağlı listeyi cinsiyet grupları içinde alfabetik olarak sıralar.
   - Parametreler:
     - `struct Student *list`: Sıralanacak bağlı liste.
   - Fonksiyon, listeyi erkek ve kadın alt listelere ayırır, her alt listeyi isme göre alfabetik olarak sıralar ve ardından iki alt listeyi birleştirerek tek bir sıralı liste oluşturur.

3. **`printList` Fonksiyonu:**
   - Bu fonksiyon, bağlı listenin içeriğini yazdırmak için kullanılır.
   - Parametreler:
     - `struct Student *list`: Yazdırılacak bağlı liste.
   - Fonksiyon, bağlı listeyi dolaşır ve her öğrencinin adını ve cinsiyetini yazdırır.

#### Bağlı Listeleri Kullanma:

- `insertNode` fonksiyonu, bağlı listeye öğrenci eklemekle sorumludur. Yeni bir öğrenci eklenince, bu öğrenci listenin başı olur.

- `sortList` fonksiyonu bağlı listeyi alır ve alfabetik olarak sıralar. Kadın isimleri önce, ardından erkek isimleri, hepsi alfabetik sırayla görünür.

- `printList` fonksiyonu, sıralanmamış ve sıralı listeleri görüntülemek için kullanılır.

#### Derleme ve Çalıştırma

Programı bir C derleyicisi kullanarak derleyin (örneğin, gcc):

```bash
gcc main.c -o sort_students
```

Yürütülebilir dosyayı çalıştırın:

```bash
./sort_students
```

#### Not

Sisteminizde bir C derleyicisi olduğundan emin olun.

---

Feel free to use or modify the above README content as needed for your GitHub repository.