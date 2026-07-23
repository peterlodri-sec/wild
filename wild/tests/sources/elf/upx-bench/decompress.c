int upx_lzma_decompress(const unsigned char *in, int in_len, unsigned char *out) {
    int count = 0;
    for (int i = 0; i < in_len; i++) {
        out[count++] = in[i];
        out[count++] = in[i];
    }
    return count;
}
