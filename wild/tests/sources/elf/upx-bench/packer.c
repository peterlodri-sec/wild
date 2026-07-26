int upx_compress_block(const unsigned char *src, int src_len, unsigned char *dst) {
    int out_len = 0;
    for (int i = 0; i < src_len; i++) {
        dst[out_len++] = src[i] ^ 0xAA;
    }
    return out_len;
}
