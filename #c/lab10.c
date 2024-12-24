#include <stdio.h>
 #include <stdlib.h>
 #define TABLE_SIZE 5
  // Size of the hash table
 // Function to implement the hash function
 int hashFunction(int key) {
    return key % TABLE_SIZE;
 }
 // Function to insert a key into the hash table using linear probing
 void insert(int hashTable[], int key) {
    int index = hashFunction(key);
    // Linear probing in case of collision
    while (hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE;  // Move to the next index
    }
    hashTable[index] = key;  // Insert the key at the found position
 }
 // Function to display the hash table
 void display(int hashTable[]) {
    printf("Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1)
                                                                                                                                                        
            printf("Index %d: %d\n", i, hashTable[i]);
        else
            printf("Index %d: Empty\n", i);
    }
 }
 int main() {
    int hashTable[TABLE_SIZE];
    // Initialize the hash table to -1 (indicating empty slots)
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }
    int numKeys;
    // Ask the user for the number of keys they want to insert
    printf("Enter the number of keys to insert: ");
    scanf("%d", &numKeys);
    // Dynamically create an array to store user input
    int keys[numKeys];
    // Get the keys from the user
    printf("Enter the keys:\n");
    for (int i = 0; i < numKeys; i++) {
        printf("Key %d: ", i + 1);
        scanf("%d", &keys[i]);
    }
    // Insert the keys into the hash table
    for (int i = 0; i < numKeys; i++) {
        insert(hashTable, keys[i]);
    }
    // Display the hash table
    display(hashTable);
    return 0;
 }



