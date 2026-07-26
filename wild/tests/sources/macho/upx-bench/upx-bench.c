//#Object:runtime.c
//#Object:packer.c
//#Object:filter.c
//#Object:compress.c
//#Object:decompress.c
//#CompArgs:-fno-stack-protector
//#ExpectSym:_main
//#TestUpdateInPlace:true
//#TestIncremental:true
//#DiffIgnore:section.__unwind_info

#include "../common/runtime.h"

int upx_compress_block(const unsigned char *src, int src_len, unsigned char *dst);
void upx_filter_transform(unsigned char *buf, int len);
int upx_lzma_compress(const unsigned char *in, int in_len, unsigned char *out);
int upx_lzma_decompress(const unsigned char *in, int in_len, unsigned char *out);

int main(void) {
    unsigned char input[16];
    unsigned char output[64];
    for (int i = 0; i < 16; i++) input[i] = (unsigned char)(i + 1);
    for (int i = 0; i < 64; i++) output[i] = 0;

    int len1 = upx_compress_block(input, 16, output);
    upx_filter_transform(output, len1);
    int len2 = upx_lzma_compress(output, len1, input);
    (void)len2;

    exit_syscall(42);
}
