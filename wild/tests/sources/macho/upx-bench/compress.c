int upx_lzma_compress(const unsigned char *in, int in_len, unsigned char *out) {
    int count = 0;
    for (int i = 0; i < in_len; i += 2) {
        out[count++] = in[i];
    }
    return count;
}
