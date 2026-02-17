function malloc(size):
    align size
    search free list
    if found:
        mark block used
        return pointer
    else:
        request memory from OS
        return pointer
