
#include <stdio.h>
#define TABLE_SIZE 10

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void insert(int hashTable[], int key) {
    int index = hashFunction(key);
    while (hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE;
    }
    hashTable[index] = key;
}

void display(int hashTable[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Index %d: %d\n", i, hashTable[i]);
        else
            printf("Index %d: Empty\n", i);
    }
}

int main() {
    int hashTable[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }

    int numKeys;
    printf("Enter the number of keys to insert: ");
    scanf("%d", &numKeys);

    int keys[numKeys];
    printf("Enter the keys:\n");
    for (int i = 0; i < numKeys; i++) {
        printf("Key %d: ", i + 1);
        scanf("%d", &keys[i]);
    }

    for (int i = 0; i < numKeys; i++) {
        insert(hashTable, keys[i]);
    }

    display(hashTable);

    return 0;
}
