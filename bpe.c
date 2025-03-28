#include <stdio.h>
#include <string.h>


int main()
{
    const char *text = "The original BPE algorithm operates by iteratively replacing the most common contiguous sequences of characters in a target text with unused 'placeholder' bytes. The iteration ends when no sequences can be found, leaving the target text effectively compressed. Decompression can be performed by reversing this process, querying known place holder terms against their corresponding  denoted sequence,using a look up table. In the original paper,this look up table is encoded and stored along side the compressed text.";

    int text_size = strlen(text);

    for (int i = 0; i < text_size - 1; ++i){
        char a = text[i];
        char b = text[i + 1];
        printf("%c%c\n", a, b);

    }

    return 0;
}