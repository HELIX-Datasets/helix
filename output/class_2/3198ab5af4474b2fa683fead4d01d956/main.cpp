extern void *duktape_duk_get_context_default;
extern void *libopusenc_libopusenc_resampler_set_input_stride;
extern void *libudns_dns_submit_a4;
extern void *bdwgc_GC_malloc_explicitly_typed_ignore_off_page;

int main(int argc, char **argv) {
    ((void (*)())duktape_duk_get_context_default)();
    ((void (*)())libopusenc_libopusenc_resampler_set_input_stride)();
    ((void (*)())libudns_dns_submit_a4)();
    ((void (*)())bdwgc_GC_malloc_explicitly_typed_ignore_off_page)();

    return 0;
}
