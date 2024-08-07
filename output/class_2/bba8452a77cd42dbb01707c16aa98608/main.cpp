extern void *libyuv_I444ToARGBRow_Any_SSSE3;
extern void *libopusenc_libopusenc_resampler_set_input_stride;
extern void *libudns_dns_submit_a4;
extern void *libyuv_SplitUVRow_SSE2;

int main(int argc, char **argv) {
    ((void (*)())libyuv_I444ToARGBRow_Any_SSSE3)();
    ((void (*)())libopusenc_libopusenc_resampler_set_input_stride)();
    ((void (*)())libudns_dns_submit_a4)();
    ((void (*)())libyuv_SplitUVRow_SSE2)();

    return 0;
}
