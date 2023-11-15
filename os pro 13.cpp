if (heapVar i== NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    *heapVar = 30; // Heap allocation

    printf("Heap-Allocated Variable: %d\n", *heapVar);

    free(heapVar); // Release allocated memory
}

int main() {
    // Static Allocation
    printf("Static-Allocated Variable: %d\n", globalVar);

    // Stack Allocation
    stackAllocationExample();

    // Heap Allocation
    heapAllocationExample();

    return 0;
}
