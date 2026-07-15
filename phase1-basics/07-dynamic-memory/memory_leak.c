// YANLIŞ — free yok, bellek sızıntısı!
void yanlis() {
    int *ptr = malloc(sizeof(int));
    *ptr = 42;
    // free(ptr) unutuldu!
}

// DOĞRU
void dogru() {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) return;
    *ptr = 42;
    free(ptr);
    ptr = NULL;
}