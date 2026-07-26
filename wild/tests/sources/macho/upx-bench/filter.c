void upx_filter_transform(unsigned char *buf, int len) {
    for (int i = 0; i < len; i++) {
        buf[i] = (buf[i] << 1) | (buf[i] >> 7);
    }
}
